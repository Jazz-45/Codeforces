#include <iostream>
#include<string>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=1;i<n;i++){
        if(s[i-1]==s[i]){
            count++;
        }
    }
    cout<<count;
    return 0;
}