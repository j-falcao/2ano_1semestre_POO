#include <iostream>
#include <string>
#include <list>
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

};

main()
{

    listFeatures lista;
    lista.initializeFromFile("./inputList.txt")

    return 0;
}