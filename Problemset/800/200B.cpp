# include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    double sum=0;
    for(int i=0;i<n;i++){
        sum+=(double)arr[i];
    }

    double result=(sum)/(n*100);
    cout<<result*100<<endl;

    return 0;
}