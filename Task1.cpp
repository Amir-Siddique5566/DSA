#include<iostream>
using namespace std;
int ary[5];
int counter=0;

Infi(int num)
{
	ary[0]=num;
	cout<<"Number Inserted Successfully"<<endl;
}
Inla(int num)
{
	ary[counter]=num;
	cout<<"Number Inserted Successfully"<<endl;
}
ink(int k,int n)
{
	ary[k]=n;
	cout<<"Number Inserted Successfully"<<endl;
}
delfi()
{
	ary[0]=0;
	cout<<"Number Deleted Successfully"<<endl;
	for(int i=0;i<counter;i++)
	{
		ary[i]=ary[i+1];
	}
	counter--;
}
della()
{
	cout<<"Number Deleted Successfully"<<endl;
	counter--;
}
delk(int k)
{
	ary[k]=0;	
	cout<<"Number Deleted Successfully"<<endl;
	for(int i=k;i<counter;i++)
	{
		ary[i]=ary[i+1];
	}
	counter--;
}
view()
{
	for(int i=0;i<counter;i++)
	{
		cout<<ary[i]<<" , ";
	}
}
int main()
{
	int number=0,opt=1,k=0;
	cout<<"Enter Numbers in list(>=5) :";
	while(counter!=5)
	{
		cin>>number;
		ary[counter]=number;
		counter++;
	}
	while(opt!=0)
	{
		cout<<"Press 1 to Insert At First :"<<endl;
		cout<<"Press 2 to Insert At Last :"<<endl;
		cout<<"Press 3 to Insert At K number :"<<endl;
		cout<<"Press 4 to Delete At First :"<<endl;
		cout<<"Press 5 to Delete At Last :"<<endl;
		cout<<"Press 6 to Delete At K number :"<<endl;
		cout<<"Press 7 to View List :"<<endl;
		cout<<"Press 0 to Exit "<<endl;
		cin>>opt;
	switch(opt)
	{
		case 1:
			cout<<"Enter number You wanted to insert ";
			cin>>number;
			Infi(number);
			break;
		case 2:
			cout<<"Enter number You wanted to insert ";
			cin>>number;
			Inla(number);
			break;
		case 3:
			cout<<"Enter Index number Where You wanted to insert ";
			cin>>k;
			cout<<"Enter number You wanted to insert ";
			cin>>number;
			ink(k,number);
			break;	
		case 4:
			delfi();
			break;	
		case 5:
			della();
			break;	
		case 6:
			cout<<"Enter Index number You Wnated to del ";
			cin>>k;
			delk(k);
			break;	
		case 7:
			view();
			break;
	}
}
}
