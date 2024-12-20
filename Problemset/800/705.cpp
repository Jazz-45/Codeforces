# include <iostream>
# include <cstring>
using namespace std;

int main(){

    int n;
    cin>>n;

    string result="";
    for(int i=1;i<=n;i++){
        if(i%2==0){
            result += "I love";
        }
        else{
            result += "I hate";
        }

        if(i==n) result+=" it";
        else result+=" that ";
    }
    cout<<result;

    return 0;
}