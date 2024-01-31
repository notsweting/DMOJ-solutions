#include <bits/stdc++.h>
using namespace std;

bool cave[250][250][2];

bool check(int x, int y){
    int pos;
    pos = (x>=0?0:1);
    bool a = cave[abs(x)][abs(y)][pos];
    cave[abs(x)][abs(y)][pos] = true;
    return a;
}
bool dcheck(int x, int y){
    int pos;
    pos = (x>=0?0:1);
    bool a = cave[abs(x)][abs(y)][pos];
    return a;
}
int main(){
    check( 0,-1);
    check( 0,-2);
    check( 0,-3);
    check( 1,-3);
    check( 2,-3);
    check( 3,-3);
    check( 3,-4);
    check( 3,-5);
    check( 4,-5);
    check( 5,-5);
    check( 5,-4);
    check( 5,-3);
    check( 6,-3);
    check( 7,-3);
    check( 7,-4);
    check( 7,-5);
    check( 7,-6);
    check( 7,-7);
    check( 6,-7);
    check( 5,-7);
    check( 4,-7);
    check( 3,-7);
    check( 2,-7);
    check( 1,-7);
    check( 0,-7);
    check(-1,-7);
    check(-1,-7);
    check(-1,-6);
    check(-1,-5);

    int curx = -1, cury = -5;
    for(;;){
        char d;
        int k, desx=curx, desy=cury;
        pair<int, int> directions;
        cin >> d >> k;
        if(d == 'q'){
            return 0;
        }
        if(d == 'l'){
            desx=curx-k;
            directions = {-1, 0};
        }
        else if(d == 'r'){
            desx=curx+k;
            directions = {1, 0};
        }
        else if(d == 'u'){
            desy=cury+k;
            directions = {0, 1};
        }
        else if(d=='d'){
            desy=cury-k;
            directions = {0, -1};
        }
        for(int i=0; i<k; i++){
            curx += directions.first;
            cury += directions.second;
            if(check(curx, cury)){
                cout << desx << " " << desy << " DANGER" << endl;
                return 0;
            }
        }
        cout << curx << " " << cury << " safe" << endl;
        
        
    }
}