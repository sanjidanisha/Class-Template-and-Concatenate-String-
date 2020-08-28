//SANJIDA NISHA 

#include<iostream>
#include <string>
#include<fstream>
using namespace std;


template <class T>
class AddElements
{
	private:
   		T n1,n2;
    public:
    AddElements (T arg1,T arg2) 
	{
    	n1=arg1;
    	n2=arg2;
    }
    T add () 
    {
    	return n1+n2;
    }        
};

template < >
class AddElements <string> 
{
	private:
        string first;
        string second;
    public:
    AddElements(string a, string b) 
    {
    	first=a; 
    	second =b;
    }
    string concatenate ()
    {
	string third = first + second;
	return third;
    }
};

int main()
{
    int a,b;
    float c,d;
    string x, y;

    cout<<" Enter two words: ";
    cin>>x>>y;

    cout<<" Enter two int values: ";
    cin>>a>>b;

    cout<<" Enter two float values: ";
    cin>>c>>d;

    AddElements<string>Add_string(x,y); 
    cout<< " "<<Add_string.concatenate()<<endl;

    AddElements<int>Add_int(a,b); 
    cout<< " "<<Add_int.add()<<endl;

    AddElements<float>Add_float(c,d); 
    cout<< " " <<Add_float.add()<<endl;
   
    return 0;
}

