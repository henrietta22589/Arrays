/*This program will read the data of an array, the array will be recognized by the letter a. the array a 
will have 20 float numbers. 
(a)It is requested by this exercise the data of this array to be printed out 
in reverse. 
(b)There will be a second array with the name b. This array will have 30 char values, it is requested to be 
counted the letter a, in this array. 
(c) at last there will be an onother array with the name c and this array will have boolean values. This 
array will have a total lenght 15. it is requested to be counted the true values and false values*/
#include<iostream>
using namespace std;
#define f 20/*i'am using define just to get used to it again*/
#define ch 30/*The define tool in c/c++ doesn't have any point in programs so small like this one*/
#define bl 15/*but i am using it just as i said before to get used to it*/ 
int main() 
{
  float a[f];
  char b[ch];
  bool c[bl];
  int counter=0;

  // Read the 20 float numbers
  for (int i = 0; i < f; i++) 
  {
    cout << "Enter a float number: ";
    cin >> a[i];
  }
 // Print the 20 float numbers in reverse order
  for (int i = f - 1; i >= 0; i--) 
  {
    cout << a[i] << " ";
  }
  cout << endl;
  cout<<"You have to give me 30 characters"<<endl;
  for(int j=0;j<30;j++)
  {
      cout<<"Give me a Character: "<<endl;
      cin>>b[j];
  }
  cout<<"The characters of this array are: ";
   for(int j=0;j<30;j++)
  {
      cout<<b[j];
  }
  cout<<endl;
  cout<<"The letter a in this array appears: ";
 for(int j=0;j<5;j++)
  {
      if (b[j]=='a')
      {
          counter=counter+1;
      }
  }
  cout<<counter;
  cout<<endl;
  for(int k=0;k<15;k++)
  {
     cin>>c[k];
     cout<<c[k];
     cout<<endl;
  }
  counter=0;
  int counter_tr=0;

  for(int k=0;k<15;k++)
  {
      if(c[k]==0)
      {
          counter=counter+1;
      }
      else
      {
          counter_tr=counter_tr+1;
      }
  }
  cout<<"The true values are : ";
  //cout<<endl;
  cout<<counter_tr;
  cout<<endl;
  cout<<"The false values are : ";
  cout<<counter;
  

return 0;
}