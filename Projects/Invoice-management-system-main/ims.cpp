#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
static int quantity[30],n,i,total,a,b,c,d,Balance;
static float price[30],MRP[30];
static char itemname[10][50],address[50],name[50];
void date()
{
struct date d;
getdate(&d);
printf("\t\t\t\t\t\t\t\tDATE:%d-%d-%d",d.da_day,d.da_mon,d.da_year);
cout<<endl;
}
void company()
{
cout<<"Enter company Name"<<endl;
cin>>name;
cout<<"Enter the address of the company"<<endl;
cin>>address;
cout<<"Total No of products"<<endl;
cin>>n;
cout<<"Enter Short code names for item name(Upto 8 characters)"<<endl;
}
void item()
{
cout<<"Enter Item name\t\t";
for(i=1;i<=n;i++)
{
scanf("%s",itemname[i]);
}
cout<<"Enter Quantity\t\t";
for(i=1;i<=n;i++)
{
cin>>quantity[i];
}
cout<<"Enter MRP\t\t";
for(i=1;i<=n;i++)
{
cin>>MRP[i];
}
for(i=1;i<=n;i++)
{
price[i]=quantity[i]*MRP[i];
}
for(i=1;i<=n;i++)
{
cout<<price[i]<<endl;
}
}
void line()
{
cout<<"==============================================================================="<<endl;
}
void output()
{
line();
cout<<"\t\t\t\t"<<name<<endl<<"\t\t\t\t"<<address<<endl;
date();
line();
cout<<"\t\t\t\tTAX INVOICE"<<endl;
cout<<"Item name\t\tQuantity\t\tMRP\t\tPrice"<<endl;
for(i=1;i<=n;i++)
{
cout<<itemname[i];
cout<<"\t\t\t";
cout<<quantity[i]<<"\t\t\t";
cout<<MRP[i]<<"\t\t";
cout<<price[i]<<endl;
total=total+price[i];
}
cout<<"\t\t\t\t\t\t\t\t"<<"TOTAL:"<<total<<endl;
line();
cout<<"Select Payment Mode";
cout<<"1.Cash,2.Credit/Debit Card";
cin>>a;
switch(a)
{
case 1:cout<<"Enter the amount collected  "<<endl;
	cin>>b;
	Balance=b-total;
	if(Balance>=0)
	{
	cout<<"Balance amount is  "<<Balance<<endl;
	}
	else
	{
	cout<<"Insufficient Amount"<<endl;
	cout<<"Transaction FAILED"<<endl;
	}
	break;
	case 2:cout<<"Enter Card number"<<endl;
	cin>>c;
	cout<<"Enter Pin"<<endl;
	cin>>d;
	cout<<"Transaction Successful"<<endl;
	break;
default:cout<<"Invalid Payment Method"<<endl;
	cout<<"Transaction FAILED"<<endl;
	break;
}
cout<<"Thank You for Shopping at "<<name<<endl;
cout<<"Visit Again";
}
void loop()
{
for(i=1;i<=n;i++)
{
item();
}
}
void main()
{
clrscr();
company();
loop();
output();
getch();
}
