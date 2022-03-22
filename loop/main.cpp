#include <iostream>

using namespace std;

int main()
{
    int num1=2021;
    int num2;
    cout<<"TAKE ANY NUMBER:"<<endl;
    cin>>num2;

    while(num2!=num1)
    {

            cout<<"TRY AGAIN \n ENTER THE NUMBER AGAIN:"<<endl;
            cin>>num2;
    }

    cout<<"YOU WIN."<<endl;
    return 0;
}
