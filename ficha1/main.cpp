#include <iostream>
#include <vector>
#include <chrono>
#include <fstream>
using namespace std;

void GuardarFicheiro(string ficheiro_output, string metodo, int N, double elapsedTime, int nTrocas);

class Timer{
public:
    void start(){
        start_time = std::chrono::high_resolution_clock::now();
    }

    double getDuration(){
        auto end_time = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
        return duration.count() / 1000.0;
    }

    int nTrocas = 0;
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time;
};


template <class T>
class Ordenacao{
public:
    static void bubbleSort(T *array, int N, bool isAscendent, string ficheiro_output){
        Timer timer;
        timer.start();
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N - i - 1; j++){
                if (isAscendent && array[j] > array[j + 1] || !isAscendent && array[j] < array[j + 1]){
                    T temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                    timer.nTrocas++;
                }
            }
        }

        double elapsedTime = timer.getDuration();
        GuardarFicheiro(ficheiro_output, __FUNCTION__, N, elapsedTime, timer.nTrocas);
    }

    static void selectionSort(T *array, int N, bool isAscendent, string ficheiro_output){
        Timer timer;
        timer.start();
        for (int i = 0; i < N - 1; i++){
            // find max/min
            T *max = &array[i];
            for (int j = i + 1; j < N; j++){
                if (isAscendent && array[j] < *max)
                    max = &array[j];
                else if (!isAscendent && array[j] > *max)
                    max = &array[j];
            }

            // swap values
            T temp = array[i];
            array[i] = *max;
            *max = temp;
            timer.nTrocas++;
        }
        
        double elapsedTime = timer.getDuration();
        GuardarFicheiro(ficheiro_output, __FUNCTION__, N, elapsedTime, timer.nTrocas);
    }
};

int main()
{
    // Writing csv header
    std::string ficheiro_output = ".//output.csv";
    fstream file(ficheiro_output, ios::out);
    if (!file.is_open()) cout << "Cannot open file" << endl;
    file << "metodo," << "N," << "nTrocas," << "tempo\n";
    file.close();



    int nums[25] = {1, 6, 3, 2, 7, 4, 5, 6, 3, 2, 1, 3, 7, 8, 9, 5, 3, 4, 5, 6, 8, 9, 9, 9, 9};

    Ordenacao<int>::bubbleSort(nums, 25, true, ".//output.csv");
    for (int i = 0; i < 25; i++)
        cout << nums[i] << ' ';
    cout << '\n';

    Ordenacao<int>::selectionSort(nums, 25, true, ".//output.csv");
    for (int i = 0; i < 25; i++)
        cout << nums[i] << ' ';
    cout << '\n';

    

    return 0;
}

void GuardarFicheiro(string ficheiro_output, string metodo, int N, double elapsedTime, int nTrocas){
    fstream file(ficheiro_output, ios::out | ios::app);
    if (!file.is_open()) cout << "Cannot open file" << endl;

    file << metodo << ',' << N << ',' << nTrocas << ',' << elapsedTime << '\n';

    file.close();
}