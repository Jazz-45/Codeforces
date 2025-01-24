#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;

    int monthNumber;
    if(s=="January") monthNumber=1;
    else if(s == "February") monthNumber = 2;
    else if(s == "March") monthNumber = 3;
    else if(s == "April") monthNumber = 4;
    else if(s == "May") monthNumber = 5;
    else if(s == "June") monthNumber = 6;
    else if(s == "July") monthNumber = 7;
    else if(s == "August") monthNumber = 8;
    else if(s == "September") monthNumber = 9;
    else if(s == "October") monthNumber = 10;
    else if(s == "November") monthNumber = 11;
    else monthNumber = 12;

    monthNumber = (monthNumber + k - 1) % 12 + 1;

    if(monthNumber == 1) cout << "January" << endl;
    else if(monthNumber == 2) cout << "February" << endl;
    else if(monthNumber == 3) cout << "March" << endl;
    else if(monthNumber == 4) cout << "April" << endl;
    else if(monthNumber == 5) cout << "May" << endl;
    else if(monthNumber == 6) cout << "June" << endl;
    else if(monthNumber == 7) cout << "July" << endl;
    else if(monthNumber == 8) cout << "August" << endl;
    else if(monthNumber == 9) cout << "September" << endl;
    else if(monthNumber == 10) cout << "October" << endl;
    else if(monthNumber == 11) cout << "November" << endl;
    else cout << "December" << endl;
}