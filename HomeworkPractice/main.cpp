#include <iostream>

using namespace std;

class Fibonacci
{
public:
    int num1=0;
    int num2=1,num3,sum=1;

    void series(int number)
    {
        if(number>0)
        {
            num3=num1+num2;
            num1=num2;
            num2=num3;
            cout<<num3<<" ";
            series(number-1);

        }
    }

};
int main()
{
   int num;
   cout<<"enter the range of the number :"<<endl;
   cin>>num;
   cout<<"0"<<" "<<"1"<<" ";

   Fibonacci f1;
   f1.series(num);

    return 0;
}
