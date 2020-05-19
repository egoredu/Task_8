#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
#include <fstream>
using namespace std;

int main() {
    map<string, string> dict;
    vector<int> vectorPair;
    string key, value, filename_in;
    // вводится число пар, а потом сами пары синонимов, пара (два слова, разд пробелом) в каждой строке
    ifstream fin;
    cout << "Enter the input file path:\n";
    cin >> filename_in;
    fin.open(filename_in);

    int n; // количество пар
    fin >> n;
    for (int i = 0; i < n; ++i) {
        fin >> key;
        fin >> value;
        dict.insert(make_pair(key, value)); // создаем пары синонимов
        dict.insert(make_pair(value, key));
    }
    fin >> key; // запрос – последнее слово, к которому ищем синоним
    cout << dict.find(key)->second;
    return 0;
}
