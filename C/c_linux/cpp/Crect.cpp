#include<iostream>
using namespace std;
class Crect
{
	int x,y;
	public:void set_values(int,int);
		int area()
		{
			return (x*y);
		}
};
void Crect::set_values(int a,int b)
{
	x=a;y=b;
}
int main()
{
	Crect rect,rectb;
	rect.set_values(3,4);
	rectb.set_values(5,6);
	cout<<"rect area:"<<rect.area()<<endl;
	cout<<"rectb area:"<<rectb.area()<<endl;

}
