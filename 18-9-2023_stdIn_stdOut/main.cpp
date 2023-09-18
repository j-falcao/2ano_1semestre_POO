#include <iostream>
#include <string>
using namespace std;

void Histograma(int N);

int main() {
    int n;
    cout << "Enter a number: " << std::endl;
    cin >> n;

    Histograma(n);

    return 0;
}


void Histograma(int N){
    string numStr = to_string(N); // numSTR "251"
    for(int i = 0; i < 9; i++){ // linhas
        for(char num: numStr) // colunas
            cout << (i >= 9 - (num - '0') ? '*' : '-') << ' '; 
        cout << '\n';
    }
}