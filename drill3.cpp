#include"std_lib_facilities.h"
int main()
{
	cout<<" Enter the name of the person you want to write to(followed by 'enter'):\n";
	string first_name;
	cin>> first_name;
	cout<< "Enter friend name(followed by 'enter'):\n";
	string friend_name;
	cin>> friend_name;

	char friend_sex =0;
	cout<< "Enter f if the friend is female or enter m if the friend is male";
	cin >> friend_sex;

	int age;
	cin>> age;

	cout<<"Dear "<<first_name<<","<< "\n";
	cout<<"Im writting this letter 'cause we speak a long time since the last time and I want to know whats up with you nowdays?\n";
	cout<<"Have you seen "<< friend_name<< "since the last time?";
	if(friend_sex== 'f') cout<<"If you see "<<friend_name<<"ask her please to organise another meet.\n";
	else(friend_sex== 'm') cout<<"If you see "<<friend_name<<"ask him please to organise another meet.\n";
	if(age <=0 || age >=101) simple_error("You are just kidding!");
	else cout<<"Yeah, i heard about that you are at age "<<age<<"\n";
	if (age<16) cout<<"Next year you will be " <<age+1<<"\n";
	else if (age==17) cout<<"Next year you will be able to vote.\n";
	else(age>70) cout<<"I hope you enjoy your retirement.\n";
	cout<<"Best wishes,\n";
	cout<<"Béla Roland Kun\n";
	return 0;
}
