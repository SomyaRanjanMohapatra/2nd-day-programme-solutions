#include<iostream.h>
#include<conio.h>
void main()
{
char ch='A';
int i,j,k,m;
for(i=1;i<5;i++)
{ 
 for(j=5;j>i;j--)
     cout<<" ";
 for(k=1;k<=i;k++)
     cout<<ch++;
     ch--;
 for(m=1;m<=i;m++)
     cout<<--ch;
 cout<<"/n";
 ch='A';
}
}      

