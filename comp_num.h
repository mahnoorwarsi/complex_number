#include<iostream>
#include<cmath>
using namespace std;

class complexnumber
{
public:
	complexnumber()
	{
		this->real = 0;
		this->image = 0;
	}
	complexnumber(float real, float image)
	{
		this->real = real;
		this->image = image;
	}
	complexnumber(complexnumber& clonenum)
	{
		this->real = clonenum.real;
		this->image = clonenum.image;
	}


	void setNum(float real,float image)
	{
		this->real = real;
		this->image = image;
	}
	double getreal()
	{
		return this->real;
	}
	double getimage()
	{
		return this->image;
	}


	complexnumber add(complexnumber z)
	{
		complexnumber result(this->real + z.real, this->image + z.image);
			return result;
	}
	complexnumber sub(complexnumber z)
	{
		complexnumber result(this->real - z.real, this->image - z.image);
			return result;
	}
	complexnumber conjugate(complexnumber z4)
	{
		complexnumber c(this->real,this->image*-1);
		return c;
	}
	complexnumber modulus(complexnumber z4)
	{
	double mod= (sqrt(pow(this->real,2) + pow(this->image,2)));
}
	void display()
	{
		cout << this->real << "+" << this->image << "i" << endl;
	}
	/*
	int pow(int base, int exp)
	{
int p((base*exp)+(base*exp));
	return p;
	}*/

complexnumber operator + (complexnumber z)
{
	complexnumber z5(this->real+z.real,this->image+z.image);
	return z5;
}
complexnumber operator - (complexnumber z)
{
	complexnumber z6(this->real-z.real,this->image-z.image);
	return z6;
}
complexnumber operator * (complexnumber z)
{
	complexnumber z7(this->real*z.real - this->image*z.image , this->real*z.image + this->image*z.real);
	return z7;
}

complexnumber operator / (complexnumber z)
{
	double a = this->real;
    double b = this->image;
    double c = z.real;
    double d = z.image;
    complexnumber z8((a*c + b * d) / (pow(c, 2) + pow(d, 2)), (b*c - a * d) / (pow(c, 2) + pow(d, 2)));
    return z8;
}
private:
	float real;
	float image;
};
ostream& operator<<(ostream& o,complexnumber z)
{
	return o <<z.getreal()<<"+"<<z.getimage()<<"i"<<endl;
}
