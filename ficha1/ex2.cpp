#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include <iterator>
#include <fstream>
using namespace std;

class listFeatures{
    list<string> lista;

public:
    void initializeFromFile(string filename)
    {
        fstream file(filename, ios::in);

        if (!file.is_open())
            return;

        string line;
        while (getline(file, line))
            lista.push_back(line);

        file.close();
    }

    size_t Size(){ return lista.size(); }

    void showList(){
        list<string>::iterator it;
        for(it = lista.begin(); it != lista.end(); ++it) cout << *it << "--";
        cout << "nullptr\n";
    }

    void showListReversed(){
        list<string>::iterator it;
        cout << "nullptr";
        for(it = prev(lista.end()); it != prev(lista.begin()); --it) cout << "--" << *it;
        cout << '\n';
    }

};

int main(){

    listFeatures lista;
    lista.initializeFromFile("./inputList.txt");
    cout << lista.Size() << endl;
    lista.showList();
    lista.showListReversed();

    return 0;
}