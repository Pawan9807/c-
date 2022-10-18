#include<iostream>
using namespace std;
/*
int main()
{
    string car="Audio";
    string *ptr=&car;

    cout<<car<<endl;
    cout<<&car<<endl;
    cout<<*ptr;
    return 0;
} */
//swapping two number


//int swap(int *a,int *b) 
/*
int swap(string *a,string *b)
//int swap(char *a,int *b)
{   string res;
    res=*a;
    *a=*b;
    *b=res;
  

int main()
{   
     string a="rwerf",b="ertwqf";     
         //int a=4,b=5;
    swap(a,b);
    cout<<a<<endl;
    cout<<b;
    return 0;
}*/
int swap(char *a,int *b)
{  
    if( *a&&*b) 
    {char res;
    res=*a;
    *a=*b;
    *b=res;
    }
  /*  *a=*a+*b;

    *b=*a-*b;
    *a=*a-*b;
  */ 
}
int main()
{   
     char a='f',b='d';     
         //int a=4,b=5;
    swap(a,b);
    cout<<a<<endl;
    cout<<b;
    return 0;
} /*
int swap(char *a,int *b)
{   char res;
    res=*a;
    *a=*b;
    *b=res;
  /*  *a=*a+*b;

    *b=*a-*b;
    *a=*a-*b;
  
}
int main()
{   
     char a='f',b='d';     
         //int a=4,b=5;
    swap(a,b);
    cout<<a<<endl;
    cout<<b;
    return 0;
} */