// A program that displays prime between 1 to 20
#include<iostream>
using namespace std;
int main()
{
    int i,j, count=0;
    cout<<endl<<"prime number between 1 to 20:";
     for(i=2;i<20;i++)
     {
         count=0;
          for(j=2;j<i;j++)
          {
              if(i%j==0)
              {
                  count++;
                  break;
              }
          }
          if(count==0)
          {
              cout<<i<<"";
          }
     }
     return 0;
}

