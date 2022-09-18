#include<bits/stdc++.h>
using namespace std;

int main() {
    string k, l="";
    cin >> k;
    char prev='0';
    int current=0;
    for(int i=0; i<k.size(); i++){
        if(k[i]=='+'){
            l+=" tighten ";
        }
        else if(k[i]=='-'){
            l+=" loosen ";
        }
        else if(i==k.size()-1){
            current*=10;
            current+=k[i]-'0';
            cout<<l<<current<<endl;
        }
        else if(k[i]=='0'||k[i]=='1'||k[i]=='2'||k[i]=='3'||k[i]=='4'||k[i]=='5'||k[i]=='6'||k[i]=='7'||k[i]=='8'||k[i]=='9'){
            current*=10;
            current+=k[i]-'0';
        }
        else if(i!=0&&prev=='0'||prev=='1'||prev=='2'||prev=='3'||prev=='4'||prev=='5'||prev=='6'||prev=='7'||prev=='8'||prev=='9'&&(k[i]!='0'||k[i]!='1'||k[i]!='2'||k[i]!='3'||k[i]!='4'||k[i]!='5'||k[i]!='6'||k[i]!='7'||k[i]!='8'||k[i]!='9')){
            cout<<l<<current<<endl;
            l="";
            l+=k[i];
            current=0;
        }
        else{
            l+=k[i];
        }
        prev=k[i];
    }

    return 0;
}