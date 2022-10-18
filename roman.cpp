#include<iostream>
using namespace std;
 
 int value(char str)
 {
    if(str=='I')
      return 1;
     if(str=='V')
      return 5;
       if(str=='X')
      return 10;
       if(str=='L')
      return 50;
       if(str=='C')
      return 100;
       if(str=='D')
      return 500;
       if(str=='M')
      return 1000;
 }

 int Roman(string &str)
 {
    int res=0;
   int s1,s2;
    for(int i=0;i<str.length();i++)
      {
        s1=value(str[i]);

        if(i+1<str.length())
        {  
            s2=value(str[i+1]);
          if(s1 >= s2)
          {
            res=res+s1;
          }
          else 
          {
            res=res+s2-s1;
            i++;
          }
        }
        else 
          
        {
            res=res+s1;
        }

      }
      return res;
 }

 int main()
 {
    string str="MDCIV";
    cout<<Roman(str);

    return 0;
 } 