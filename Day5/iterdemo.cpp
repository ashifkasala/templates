#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> l;
	list<int>::iterator t;
	list<int>::reverse_iterator t1;

	for(int i=0;i<=9;i++)
		l.push_back(i);

	//display in forward direction
	cout<<"display in forward direction"<<endl;
	for(t=l.begin();t != l.end();t++)
		cout<<*t<<" ";
	cout<<endl;

	//display in reverse direction
	cout<<"display in reverse direction"<<endl;
	for(t1=l.rbegin();t1 != l.rend();t1++)
		cout<<*t1<<" ";
	cout<<endl;

	//display in random fashion
	cout<<"display in random fashion"<<endl;
	for(t = l.begin();t != l.end();advance(t,2)) //advance inbuilt algorithm is used to step the 
                                                                            //iteration pointer by 2 nodes/values.
	cout<<*t<< " ";
	cout<<endl;
	
}
