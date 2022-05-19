#include<iostream>
using namespace std;
int main()
{
  int data[5],i;
  cout<<"Enter ellements:";
  for(i=0;i<5;i++)
    cin>>data[i];
  cout<<"you enter:";
  for(i= 0;i<5;i++)
    cout<<endl<<*(data+i);
  return 0;
}