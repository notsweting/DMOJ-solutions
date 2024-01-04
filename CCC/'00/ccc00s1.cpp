#include <bits/stdc++.h>
using namespace std;

int main(){
    int quarters, m1, m2, m3;
    cin >> quarters >> m1 >> m2 >> m3;

    int i=0;
    for(i=0; quarters>0; i++){
        if(i%3 == 0){
            m1++;
            quarters--;
            if(m1%35 == 0){
                quarters+=30;
            }
        }
        else if(i%3 == 1){
            m2++;
            quarters--;
            if(m2%100 == 0){
                quarters+=60;
            }
        }
        else if(i%3 == 2){
            m3++;
            quarters--;
            if(m3%10 == 0){
                quarters+=9;
            }
        }
    }
    cout << "Martha plays " << i << " times before going broke.";
}