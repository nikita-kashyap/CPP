#include <iostream>

using namespace std;

class PrimeNum
{
public:
   void checkPrime(int number)
   {
       int i, num2=0, flag=0;
       num2=number/2;

       for(i = 2; i <= num2; i++)
        {
            if(number % i == 0)
            {
                cout<<"Number is not Prime."<<endl;
                flag=1;
                break;
            }
        }

      if (flag==0)
      {
          cout << "Number is Prime."<<endl;
      }
   }
};

int main()
{
    int num;

     cout << "Enter the Number to check Prime: ";
     cin >> num;
     PrimeNum p1;
     p1.checkPrime(num);

    return 0;
}
