""" Rotate Sttrings """"

#include <iostream>
#include<string.h>

using namespace std;
string s;

void strshift()
{
    char temp;
    int l = s.length()-1,i;
    temp = s[l];
    s[l] = s[0] ;
    for(i=0;i<l-1;i++)
    {
        s[i] = s[i+1];
    }
    s[l-1] = temp;
}

int sc()
{
    int i =0,c = 0 ;
    int l = s.length()-1;
    for(i=0;i<l;i++)
    {
        if(s[i] != '0')
        {
            return c;
        }
        else
        {
            c++;
        }
    }
}

int ec()
{
    int i =0,c = 0 ;
    int l = s.length()-1;
    for(i=l;i>=0;i--)
    {
        if(s[i] != '0')
        {
            return c;
        }
        else
        {
            c++;
        }
    }
}

int main()
{
    int val = 0;
    cin >> s;
    string temp = s;
    
    strshift();
    
    while(s != temp)
    {
        
      if(val < sc()+ec())
      {
          val = sc()+ec();
      }
      strshift();
    }
    cout << val;
}

