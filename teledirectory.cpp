#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct
{
char name[40];
int userid;
char address[60];
char city[50];
int nooflines;
char gender;
}s[20];
void main()
{
clrscr();
int i,j,p=-1,n,ch,ud,big,t;
char ans,gen,inp[50];
cout<<"Welcome to the program 􀀀";
delay(500);
clrscr();
cout<<"Enter number of databases to be entered";
cin>>n;
clrscr();
for(i=0;i<n;i++)
{
cout<<"Enter user number";
cin>>s[i].userid;
cout<<"\nEnter name";
gets(s[i].name);
cout<<"\nEnter address";
gets(s[i].address);
cout<<"\nEnter no. of lines";
cin>>s[i].nooflines;
cout<<"\nEnter Gender (M-Male, F-Female)";
cin>>s[i].gender;
if(s[i].nooflines>500)
strcpy(s[i].city,"Delhi");
else
strcpy(s[i].city,"Gurgaon");
delay(500);
clrscr();
}
do
{
cout<<"1.Search on userid";
cout<<"\n2.Search on city";
cout<<"\n3.Arrange records based on descending order of userid";
cout<<"\n4.Display number of male users";
cout<<"\n5.No of users living in city entered";
cin>>ch;
clrscr();
switch(ch)
{
case 1: cout<<"Enter UserID";
cin>>ud;
for(i=0;i<n;i++)
if(s[i].userid==ud)
{
p=i;
break;
}
cout<<"\nSearching . . ";
delay(400);
cout<<" . ";
delay(400);
cout<<" . ";
delay(400);
cout<<" . ";
delay(400);
cout<<" . ";
if(p>=0)
{
cout<<"\nFound 􀀀";
delay(500);
clrscr();
cout<<"Name: ";
puts(s[p].name);
cout<<"\nCity: ";
puts(s[i].city);
cout<<"\nAddress: ";
puts(s[i].address);
delay(600);
}
else
{
cout<<"\nNot Found :(";
delay(500);
}
clrscr();
break;
case 2: cout<<"Enter city name";
gets(inp);
for(i=0;i<n;i++)
if(strcmpi(inp,s[i].city)==0)
{
cout<<"\nFound 􀀀";
delay(500);
clrscr();
cout<<"User ID: "<<s[i].userid;
cout<<"\nName: ";
puts(s[p].name);
cout<<"\nAddress: ";
puts(s[i].address);
delay(500);
}
if(p==-1)
{
cout<<"Empty city :(";
delay(500);
}
clrscr();
break;
case 3: for(i=0;i<n;i++)
{
big=s[i].userid;
p=i;
for(j=n;j<i+1;j--)
{
if(big<s[j].userid)
{
big=s[j].userid;
p=j;
}
}
t=s[i].userid;
s[i].userid=s[p].userid;
s[p].userid=t;
}
for(i=0;i<n;i++)
{
clrscr();
cout<<"User ID"<<s[i].userid;
cout<<"Name: ";
puts(s[p].name);
cout<<"\nCity: ";
puts(s[i].city);
cout<<"\nAddress: ";
puts(s[i].address);
}
clrscr();
break;
case 4: p=0;
for(i=0;i<n;i++)
{
if(s[i].gender=='m' || s[i].gender=='M')
p++;
}
if(p==0)
cout<<":( Its a women's world";
else
{
cout<<"\nCounting . . ";
delay(400);
cout<<" . ";
delay(400);
cout<<" . ";
delay(400);
cout<<" . ";
delay(400);
cout<<" . ";
cout<<"\nNo. of male users are:"<<p;
delay(500);
clrscr();
}
break;
case 5: cout<<"Enter city";
gets(inp);
for(i=0,p=0;i<n;i++)
{
if(strcmpi(inp,s[i].city)==0)
p++;
}
if(p==0)
cout<<"\nIts an empty city";
else
cout<<"\nNo. of users living there: "<<p;
delay(500);
break;
}
clrscr();
cout<<"Do you wish to continue?";
cin>>ans;
while(ans=='y' || ans=='Y');
cout<<"Thank you 􀀀";
getch();
}