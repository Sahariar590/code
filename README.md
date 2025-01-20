#include<iostream>
using namespace std;
int main()
{
 int n,i,sum=0;
 cout << "Enter n:";
 cin >> n;
 cout << "N Number of natural number:";
 for (int i = 1; i<=n;i++)
 {
  cout << i<<" ";
  sum += i;
 }
 cout << endl;
 cout <<"N Number of natural number sum:"<< sum;
 
}# code
