#include<iostream>
using namespace std;

class student; 
class smart_ptr
{
private:
student *s1;
public:
smart_ptr(student *p= NULL)
{
s1 = p;
cout<<"smart_ptr::samrt_ptr()"<<endl;
}
student& operator *()
{
cout<<"inside *funtion"<<endl;
return *s1;
}
student* operator ->()
{

cout<<"inside ->funtion"<<endl;
return s1;
}
};

class student
{
private:
int i;

public:
void show()
{
cout<<"student::show()"<<endl;
}
};


int main()
{
//smart_ptr obj(new student());
//obj->show();

smart_ptr *n1 = new smart_ptr(new student);
n1.show();
}

