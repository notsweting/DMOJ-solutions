#include <bits/stdc++.h>
using namespace std;

int main(){
    int total=0;

    map<char, int> numerals;
    numerals['I'] = 1;
    numerals['V'] = 5;
    numerals['X'] = 10;
    numerals['L'] = 50;
    numerals['C'] = 100;
    numerals['D'] = 500;
    numerals['M'] = 1000;
    numerals['0'] = 0;
    numerals['1'] = 1;
    numerals['2'] = 2;
    numerals['3'] = 3;
    numerals['4'] = 4;
    numerals['5'] = 5;
    numerals['6'] = 6;
    numerals['7'] = 7;
    numerals['8'] = 8;
    numerals['9'] = 9;

    string k;
    getline(cin, k);

    int curmul;
    int curchar;
    int curint;

    int prevmul = numerals[k[0]];
    int prevchar = numerals[k[1]];
    int prevint = prevmul * prevchar;

    total += prevint;

    for(int i=2; i<k.size(); i+=2){
        curmul = numerals[k[i]];
        curchar = numerals[k[i+1]];
        curint = curmul * curchar;

        if(curchar > prevchar){
            total -= prevint*2;
        }

        total += curint;

        prevmul = curmul;
        prevchar = curchar;
        prevint = curint;
    }
    
    cout << total;
}