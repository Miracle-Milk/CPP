#include<iostream>
using namespace std;

class VECTOR3D
{
public:
	VECTOR3D();
	VECTOR3D(double, double, double);
	~VECTOR3D();
	void set(double, double, double);
	void show();
	VECTOR3D operator+(VECTOR3D);
private:
	double x, y, z;
};

VECTOR3D::VECTOR3D()
{
	x = 0; y = 0; z = 0;
}

VECTOR3D::VECTOR3D(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

VECTOR3D::~VECTOR3D()
{
}

void VECTOR3D::set(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void VECTOR3D::show()
{
	cout << "(" << x << " " << y << " " << z << ")";
}

VECTOR3D VECTOR3D::operator+(VECTOR3D b)
{
	VECTOR3D c;
	c.x = b.x + x;
	c.y = b.y + y;
	c.z = b.z + z;
	return c;
}

int main()
{
	VECTOR3D a(1, 2, 3), b(3, 4, 5), c;		//定义对象
	double x, y, z;

	a.show(); cout << endl;
	b.show(); cout << endl;
	c.show(); cout << endl;

	cin >> x >> y >> z;		//输入
	b.set(x, y, z);
	c = a + b;				//计算和

	a.show(); cout << endl;
	b.show(); cout << endl;
	c.show(); cout << endl;

	return 0;
}