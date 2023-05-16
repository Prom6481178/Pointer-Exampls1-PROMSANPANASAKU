#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  char str[1000];
  cout<<"Input string: ";
  cin>>str;

  int SIZE=strlen(str);
  char *pa, *pb, temp, i;
  pa = &str[0];
  cout<<"Original: ";
  for(i=0; i<SIZE; i++, pa++)
    {
      cout<<*pa;
    }
  pa = &str[0]; 
  pb = &str[SIZE-1];
  cout<<"\nReverse: ";
  for(i=0; i<SIZE/2; i++, pa++,pb--)
    {
      temp=*pa;
      *pa=*pb;
      *pb=temp;
    }
    pa=&str[0];
    for(i=0; i<SIZE-1; i++,pa++)
    {
        cout<<*pa;
    }
  cout<<*pa<<endl;
  return 0;
}