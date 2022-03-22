
#include <iostream>

using namespace std;

int main()
{
    int coin10;
    int coin5;
    int coin2;
    int coin1;
    cout<<"enter the number for 10 RS coin"<<endl;
    cin>>coin10;
    cout<<"enter the number for 5 RS coin"<<endl;
    cin>>coin5;
    cout<<"enter the number for 2 RS coin"<<endl;
    cin>>coin2;
    cout<<"enter the number for 1 RS coin"<<endl;
    cin>>coin1;
    int result=(10*coin10)+(5*coin5)+(2*coin2)+(coin1);
    cout<<"result:  "<<result;
    return 0;
}
