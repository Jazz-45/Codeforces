#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;

        int count=0;

        int left=0;
        if(a>m) count+=m;
        else if(a<m){
            count+=a;
            left+=m-a;
        }
        else count+=m;

        if(b>m) count+=m;
        else{
            count+=b;
            left+=m-b;
        }

        if(left>0){
            if(left>=c){
                count+=c;
            }
            else{
                count+=left;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}