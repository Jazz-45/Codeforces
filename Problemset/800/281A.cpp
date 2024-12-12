#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string word;
    cin>>word;

    if(word[0]>='A' && word[0]<='Z') cout<<word<<endl;
    else{
        word[0]=(char)((int)(word[0])-32);
        cout<<word<<endl;
    }
    return 0;
}
