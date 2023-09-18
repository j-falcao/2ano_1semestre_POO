#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>
#include <fstream>


using namespace std;

void GuardarFicheiro(string ficheiro_output, string metodo, int N, float elapsedTime, int nTrocas){
    fstream file(ficheiro_output, ios::out);

    if(!file.is_open()) cout << "Cannot open file" << endl;
    file << "metodo," << "N," << "nTrocas," << "tempo\n";
    file << metodo << ',' << N << ',' << nTrocas << ',' << elapsedTime << '\n';

    file.close();
}


class Timer{
    std::chrono::time_point<std::chrono::steady_clock> m_StartTime;

public:
    int nTrocas = 0;

    void Start(){
        m_StartTime = std::chrono::high_resolution_clock::now();
    }

    float GetDuration()
    {
        std::chrono::duration<float> duration = std::chrono::high_resolution_clock::now() - m_StartTime;
        return duration.count();
    }
};


template<class T>
class Ordenacao{
public:
    static void bubbleSort(T* array, int N, bool isAscendent, string ficheiro_output ){
        Timer timer;
        timer.Start();
        for(int i = 0; i < N-1; i++){
            for(int j = i; j < N-i-1; j++){
                if(isAscendent && array[j] > array[j+1] || !isAscendent && array[j] < array[j+1]) {
                    T temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                    timer.nTrocas++;
                } 
            }
        }

        float elapsedTime = timer.GetDuration();
        GuardarFicheiro(ficheiro_output, __FUNCTION__, N, elapsedTime, timer.nTrocas);
    }

    static void selectionSort(T* array, int N, bool isAscendent, string ficheiro_output ){
        for(int i = 0; i < N-1; i++){

            // find max/min
            T* max = &array[i];
            for(int j = i+1; j < N; j++){
                if(isAscendent && array[j] < *max) max = &array[j];
                else if(!isAscendent && array[j] > *max) max = &array[j];
            }

            // swap values
            T temp = array[i];
            array[i] = *max;
            *max = temp;
        }
    }
};


int main() {

    int nums[5] = {1, 6, 3, 2, 7};

    Ordenacao<int>::bubbleSort(nums, 5, true, ".//output.csv");
    for(int i = 0; i < 5; i++) cout << nums[i] << ' ';
    cout << '\n';

    Ordenacao<int>::selectionSort(nums, 5, true, ".//output.csv");
    for(int i = 0; i < 5; i++) cout << nums[i] << ' ';
    cout << '\n';

    return 0;
}