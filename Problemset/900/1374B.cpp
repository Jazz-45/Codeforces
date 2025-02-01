#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        int moves=0;
        while(num!=1){
            if(num%6==0) num/=6,moves++;
	        else if(num%3==0) num*=2,moves++;
            else{
                moves=-1;
                break;
            }
        }
        cout<<moves<<endl;
    }
}
