#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	ifstream myfile; 
	string mystring;
	int countloc=0;
	myfile.open("cocomo.txt");
	
	
	
	if ( myfile.is_open() ) 
	{
		cout<<"File is open"<<endl;
		while ( myfile.peek()!=EOF ) 
		{
			getline(myfile,mystring);
			countloc++;
			
		}
		cout<<countloc;
	}
	
	else
	{
		cout<<"File not opened"<<endl;
	}
	
	int x;
    float eff, pro, time, per_req;
    float oa=2.4, ob=1.05, oc=2.5, od=0.38;
    float sda=2.4, sdb=1.05, sdc=2.5, sdd=0.38;
    float ea=2.4, eb=1.05, ec=2.5, ed=0.38;    
    
    if(countloc<=100)
    {
        x=1;
    }
    else if(countloc>100&&countloc<=500)
    {
        x=2;
    }
    else
    {
        x=3;
    }
    
    switch(x){
        case 1: eff=oa*(pow(countloc,ob));
                cout<<"\nEffort :" <<eff<<endl;
                
                pro=countloc/eff;
                cout<<"productivity : "<<pro<<endl;
                
                time=oc*(pow(eff,od));
                cout<<"Time : "<<time<<endl;
                
                per_req=eff/time;
                cout<<"Persons required : "<<per_req<<endl;
                
                break;
        case 2: eff=sda*pow(countloc,sdb);
                cout<<"\nEffort :" <<eff<<endl;
                
                pro=countloc/eff;
                cout<<"productivity : "<<pro<<endl;
                
                time=sdc*(pow(eff,sdd));
                cout<<"Time : "<<time<<endl;
                
                per_req=eff/time;
                cout<<"Persons required : "<<per_req<<endl;
                
                break;
        case 3: eff=sda*pow(countloc,sdb);
                cout<<"\nEffort :" <<eff<<endl;
                
                pro=countloc/eff;
                cout<<"productivity : "<<pro<<endl;
                
                time=sdc*(pow(eff,sdd));
                cout<<"Time : "<<time<<endl;
                
                per_req=eff/time;
                cout<<"Persons required : "<<per_req<<endl;
                
                break;
    
        default: cout<<"Please select appropriate option";
            break;
}
	return 0;
}
