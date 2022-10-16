// Program to find Factorial using functions
#include<iostream>
using namespace std;
    int Fact(int);
    
    int main()
    {
        int num, factorial;
        
        cout<<" Enter an integer : ";
        cin>>num;
        
        factorial = Fact(num);
        
        cout << "Factorial of"<< num << " is : "<< factorial << endl;
        return 0;
    }
        int Fact(int n)
        {
            int i, f = 1;
            for(i = 1; i<=n; i++)
            {
                f = f * i;
            }
            return f;
        }
        
    