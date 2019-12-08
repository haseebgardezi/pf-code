#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int shirts;
	float costpershirt,totalcost,p1,t1,p2,t2,p3,t3,p4,t4,p5,t5;
	cout<< setw(10)<<" Number of shirts \t"<< setw(10)<<" Discount \n\n";
	cout<< setw(8)<<"5-10\t\t"<<setw(15)<<" 10% \n"<<setw(10)<< " 11-20\t\t "<<setw(14)<<" 15% \n";
	cout<< setw(10)<<" 21-30\t\t "<<setw(14)<<" 20% \n"<<setw(10)<< " 31 or more\t "<<setw(15)<<" 25% \n\n";
	cout<<"How many shirts would you like ?\n";
	cin>>shirts;
	cout<< setprecision(2) << fixed << showpoint;
	t1 = static_cast<float>((shirts))*(12*0.25);
	t2 = static_cast<float>((shirts))*(12*0.20);
	t3 = static_cast<float>((shirts))*(12*0.15);
	t4 = static_cast<float>((shirts))*(12*0.10);
	t5 = static_cast<float>((shirts))*(12);
	t1 = t5-t1;
	t2 = t5-t2;
	t3 = t5-t3;
	t4 = t5-t4;
	
	p1= t1 / shirts;
	p2= t2 / shirts;
	p3= t3 / shirts;
	p4= t4 / shirts;
	p5= t5 / shirts;

	
	if(shirts > 30) 
	
	cout<<"The cost per shirt is $"<<p1<<" and toal cost is $"<<t1;
	else if((shirts > 20)&&(shirts <31))
	cout<<"The cost per shirt is $"<<p2<<" and toal cost is $"<<t2;


    else if ((shirts > 10)&&(shirts < 21))


	cout<<"The cost per shirt is $"<<p3<<" and toal cost is $"<<t3;
	else if (( shirts < 11 )&&( shirts > 4 ))
	

	cout<<"The cost per shirt is $"<<p4<<" and toal cost is $"<<t4;
	else if((shirts > 0 )&&(shirts < 5 ))
	

	cout<<"The cost per shirt is $"<<p5<<" and toal cost is $"<<t5;
    else
     cout<<"Enter valid number of shirts!";


return 0;

}

