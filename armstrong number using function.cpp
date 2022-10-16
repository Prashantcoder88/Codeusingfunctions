#include <iostream>
using namespace std;
bool ArmstrongNumber(int num);

int main(){
   int num;
   bool flag;
   cout<<"Enter a positive  integer: ";
   cin>>num;

   //Calling function
   flag = ArmstrongNumber(num);
   if(flag == true)
      cout<<num<<" is an Armstrong number.";
   else
      cout<<num<<" is not an Armstrong number.";

   return 0;
}
// User defined function 
bool ArmstrongNumber(int num) {
   int p, sum=0, r;
   bool isArm;

   p = num;
   while(p != 0) {
      r = p % 10;
      sum = sum +(r * r * r);
      p = p/10;
   }
   if (sum==num)
      isArm = true;
   else
      isArm = false;

   return isArm;
}