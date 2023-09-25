#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <list>
#include <iterator>
#include <fstream>
using namespace std;

class listFeatures{
    list<string> lista;

public:
    void initializeFromFile(string filename){
        fstream file(filename, ios::in);

        if (!file.is_open())
            return;

        string line;
        while (getline(file, line))
            lista.push_back(line);

        file.close();
    }

    size_t Size() { return lista.size(); }

    void showList(){
        list<string>::iterator it;
        for (it = lista.begin(); it != lista.end(); ++it)
            cout << *it << "--";
        cout << "nullptr\n";
    }

    void showListReversed(){
        list<string>::reverse_iterator it;
        cout << "nullptr";
        for (it = lista.rbegin(); it != lista.rend(); ++it)
            cout << "--" << *it;
        cout << '\n';
    }

    void deleteNodeByValue(string word) { lista.remove(word); }

    void deleteNodeByIndex(int index){
        if (index < 0 || index >= lista.size())
            return;

        list<string>::iterator it;
        it = lista.begin();
        advance(it, index);
        lista.erase(it);
    }

    bool existRepetition(){
        set<string> seen;
        list<string>::iterator it;
        for (it = lista.begin(); it != lista.end(); ++it)
            if(seen.find(*it) != seen.end()) return false;
        return true;
    }

    int countWordsByLength(int maxLength_exclusive){
        int count = 0;

        list<string>::iterator it;
        for (it = lista.begin(); it != lista.end(); ++it)
            if((*it).length() < maxLength_exclusive) count++;
        
        return count;
    }

    void upperCaseAll(){
        list<string>::iterator it;
        for (it = lista.begin(); it != lista.end(); ++it) 
            transform((*it).begin(), (*it).end(), (*it).begin(), ::toupper);
    }

    void writeWordsToFileByLength(string filename, int minLength_inclusive){
        fstream file(filename, ios::out);

        if(!file.is_open()) return;


        list<string>::iterator it;
        for (it = lista.begin(); it != lista.end(); ++it)
            if((*it).length() >= minLength_inclusive) file << *it << '\n';
        

        file.close();
    }
};

int main()
{

    listFeatures lista;
    lista.initializeFromFile("./inputList.txt");
    cout << lista.Size() << endl;
    lista.showList();
    lista.showListReversed();

    /* cout << "\tdeleting" << endl;
    lista.deleteNodeByValue("eu");
    lista.showList();

    lista.deleteNodeByIndex(0);
    lista.showList(); */
 
    cout << "repetition: " << lista.existRepetition() << endl;

    cout << "Count words max length: " << lista.countWordsByLength(5) << endl;

    lista.upperCaseAll();
    lista.showList();

    lista.writeWordsToFileByLength("./outputList.txt", 1);

    return 0;
}