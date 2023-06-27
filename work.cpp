#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int i = 0;
   for (int i = 2; i <= n-1; i++)
   {
    if (n % i == 0)
    {
        cout<<"not a prime number";
    }
   }    
    cout<<"it is a prime number";
   
    return 0;
}