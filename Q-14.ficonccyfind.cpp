#include <iostream>
#include <map>
using namespace std;

int main() {
    string str = "nayan";
    map<char, int> freq;

    for(char ch : str){
        freq[ch]++;
    }

    cout << "Character Frequency:\n";
    for(auto p : freq){
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}
