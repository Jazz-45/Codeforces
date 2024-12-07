#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s.length()>10){
            string result="";
            result=s[0]+to_string(s.length()-2)+s[s.length()-1];
            cout<<result<<endl;
        }
        else{
            cout<<s<<endl;
        }
        
    }
    return 0;
}