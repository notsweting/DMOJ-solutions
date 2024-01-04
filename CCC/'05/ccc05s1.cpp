#include <bits/stdc++.h>
using namespace std;

int main(){
    map <char, char> mapping;
    mapping['A'] = '2';
    mapping['B'] = '2';
    mapping['C'] = '2';
    mapping['D'] = '3';
    mapping['E'] = '3';
    mapping['F'] = '3';
    mapping['G'] = '4';
    mapping['H'] = '4';
    mapping['I'] = '4';
    mapping['J'] = '5';
    mapping['K'] = '5';
    mapping['L'] = '5';
    mapping['M'] = '6';
    mapping['N'] = '6';
    mapping['O'] = '6';
    mapping['P'] = '7';
    mapping['Q'] = '7';
    mapping['R'] = '7';
    mapping['S'] = '7';
    mapping['T'] = '8';
    mapping['U'] = '8';
    mapping['V'] = '8';
    mapping['W'] = '9';
    mapping['X'] = '9';
    mapping['Y'] = '9';
    mapping['Z'] = '9';
    mapping['0'] = '0';
    mapping['1'] = '1';
    mapping['2'] = '2';
    mapping['3'] = '3';
    mapping['4'] = '4';
    mapping['5'] = '5';
    mapping['6'] = '6';
    mapping['7'] = '7';
    mapping['8'] = '8';
    mapping['9'] = '9';
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++){
        string number;
        vector<char> characters;
        getline(cin, number);
        for(int j=0; j<number.size(); j++){
            if(number[j] == '-') continue;

            characters.push_back(mapping[number[j]]);
        }
        for(int j=0; j<10; j++){
            cout << characters[j];
            if(j == 2 || j == 5) cout << "-";
        }
        cout << endl;

    }
}