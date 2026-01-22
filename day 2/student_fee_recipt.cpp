#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int reg;
	string name,course,scholar;
	float tution_fee,hostel_fee;
	cout<<"Enter the Register Number : ";
	cin>>reg;
	cin.ignore();
	cout<<"Enter the Name : ";
	getline(cin,name);
	cout<<"Enter the Course : ";
	cin>>course;
	cout<<"Enter the Tution Fee : ";
	cin>>tution_fee;
	cout<<"Enter the Hostel Fee : ";
	cin>>hostel_fee;
	cout<<"Is Scholarship Applied   (true/false) : ";
	cin>>scholar;
	cout<<setfill('=')<<setw(50)<<"Student Fee Details"<<setw(35)<<" "<<"\n";
	cout<<"Name"<<setfill(' ')<<setw(10)<<":"<<name<<"\n";
	cout<<"Reg.no"<<setfill(' ')<<setw(8)<<":"<<reg<<"\n";
	cout<<"Departmant"<<setfill(' ')<<setw(4)<<":"<<course<<"\n";
	cout<<setfill('-')<<setw(45)<<"Fee Details"<<setw(35)<<"\n";

    cout<<"Tutuion Fee"<<setfill(' ')<<":"<<tution_fee<<"\n";
	cout<<"Hostel Fee"<<setfill(' ')<<":"<<hostel_fee<<"\n";
	cout<<"Scholarship"<<setfill(' ')<<":"<<scholar<<"\n";
	cout<<setfill('-')<<setw(45)<<"Register Number System"<<setw(35)<<"\n";
    cout<<"Decimal"<<setfill(' ')<<":"<<dec<<reg<<"\n";
    cout<<"Hexadecimal"<<setfill(' ')<<":"<<hex<<reg<<"\n";
	cout<<"Octal"<<setfill(' ')<<":"<<oct<<reg<<"\n";
    cout<<setfill('=')<<setw(100)<<"\n";

	return 0;
}