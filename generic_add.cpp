#include<iostream>
using namespace std;


//template<class t>;
/*class sample
{
private:
//t a,b,c;

public:
t show(t x,t y)
{

t total = x+y;
cout<<"sum"<<total<<endl;
}
};*/



template<class t>
t show(t x,t y)
{

t total = x+y;
cout<<"sum"<<total<<endl;
}

int main()
{

show(10,20);
show(10.2,30.22);
show('a','b');
show("sasdf","sadfsd"); //->compiler will throw error for strings it wont allow template strings in c++
}
