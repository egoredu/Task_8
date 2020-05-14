#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
using namespace std;

int main() {
    // вводится число пар, а потом сами пары синонимов, пара (два слова, разд пробелом) в каждой строке
    int n; // количество пар
    cin >> n;
    map<string, string> dict;
    vector<int> vectorPair;
    string key, value;
    for (int i = 0; i < n; ++i) {
        cin >> key;
        cin >> value;
        dict.insert(make_pair(key, value)); // создаем пары синонимов
        dict.insert(make_pair(value, key));
    }
    cin >> key; // запрос – последнее слово, к которому ищем синоним
    cout << dict.find(key)->second;
    return 0;
}