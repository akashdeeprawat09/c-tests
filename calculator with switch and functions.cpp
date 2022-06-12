#include<iostream>
using namespace std;

void add(float a, float b)
{
	cout<<a+b;
}
void sub(float a, float b)
{
	cout<<a-b;
}
void mul(float a, float b)
{
	cout<<a*b;
}
void div(float a, float b)
{
	if(b==0)
	{
		cout<<"Divisible by 0"<<endl;
	}
	else
	{
		cout<<a/b;	
	}
}

int main()
{
	int x;
	char ch;
	float a,b;
	cout<<"Enter operands"<<endl;
	cin>>a>>b;
	
	
	
	do{
	cout<<"Enter 1 for +"<<endl;
	cout<<"Enter 2 for -"<<endl;
	cout<<"Enter 3 for *"<<endl;
	cout<<"Enter 4 for /"<<endl;
	cout<<"Enter 5 to exit"<<endl;
	cin>>x;
	
	switch(x){
		case 1: add(a,b);
		break;
		case 2: sub(a,b);
		break;
		case 3: mul(a,b);
		break;
		case 4: div(a,b);
		break;
		case 5: exit(0);
		break;
		
		default: cout<<"Enter a valid choice"<<endl;
	
}
cout<<"Enter y to enter again"<<endl;
	cin>>ch;
}while(ch=='Y'||ch=='y');
	return 0;
}
