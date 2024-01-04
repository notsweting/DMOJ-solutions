#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int curx = 0, cury = 0;
    while(true){
        int dx, dy;
        cin >> dx >> dy;
        if(dx == 0 && dy == 0)
            break;
        curx += dx; cury += dy;
        if(curx > x) curx = x;
        if(curx < 0) curx = 0;
        if(cury > y) cury = y;
        if(cury < 0) cury = 0;
        cout << curx << " " << cury << endl;
    }
}