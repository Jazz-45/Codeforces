# include <iostream>
# include <algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int front=0;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>a) front++;
        if(c>a) front++;
        if(d>a) front++;
        cout<<front<<endl;
    }
    return 0;
}