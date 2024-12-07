# include<iostream>
using namespace std;

int main(){

    int k,n,w;
    cin>>k>>n>>w;

    long long amount=(k)*((w*(w+1))/2);
    if(amount<=n) cout<<0<<endl;
    else cout<<amount-n<<endl;
    return 0;
}