#include<iostream>
using namespace std;
class Point
{
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void setPoint(int i, int j)
	{
		this->x = i + x;
		this->y = j + y;
	}
	void display()
	{
		cout << "×ø±êÊÇ£¨" << x << "," << y << ")" << endl;
	}
private:
	int x;int y;
};
int main()
{
	Point p1(60, 80);
	p1.display();
	p1.setPoint(4, 9);
	p1.display();
	return 0;
}