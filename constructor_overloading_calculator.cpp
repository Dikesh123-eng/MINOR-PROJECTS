#include<iostream>
using namespace std;
class Test{
	int n;
	public:
		Test()
		{
			n=0;
		}
    void getvalue()
    {
    	cout<<"Enter the value of N:";
    	cin>>n;
	}
	//operator overlading
	Test operator+(Test obj)
	{
	Test t;
	t.n= n+obj.n;
	return t;
	}
	/*
	int display()
	{
		return n;
	}*/
	Test operator*(Test obj)
	{
	Test t;
	t.n= n*obj.n;
	return t;
	}
	int display()
	{
		return n;
	}
};
int main()
{
	Test obj1,obj2,sum,mul;
	cout<<"enter the value of Obj1:"<<endl;
	obj1.getvalue();
		cout<<"enter the value of Obj2:"<<endl;
	obj1.getvalue();
	cout<<"--------Operation************"<<endl;
	/*
	sum=obj1+obj2;
	cout<<"addition="<<sum.display()<<endl;
	*/
		mul=obj1*obj2;
	cout<<"multiplication="<<mul.display()<<endl;
	
	
}

