#include<iostream>

using namespace std;
class xyz;
class abc
{
int x;
public:
void setdata(int i)
{
x=i;
}
int getx()
{
return x;
}
friend void swap(abc,xyz);

};
class xyz
{
int y;
public:
void setdata(int i)
{
y=i;
}
int gety() 
{
 return y;
 }
friend void swap(abc,xyz);


};
void swap(abc a, xyz b)
{
int temp;
temp=a.x;
a.x=b.y;
b.y=temp;
cout<<"values after swapping\n"<<a.x<<"      "<<b.y<<endl;
}
int main()
{
abc a;
xyz b;
a.setdata(10);
b.setdata(20);
swap(a,b);


return 0;
}











