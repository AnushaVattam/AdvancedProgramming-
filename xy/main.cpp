/* comprehensive exam 2011 fall question 4 solution
Author : Praveen Nandula */

#include<iostream>
using namespace std;

class CShape
{
private:
  float dim1, dim2;
public:
  float getDim1() {return dim1;}
  float getDim2() {return dim2;}
  void setDim1(float d) {dim1 = d;}
  void setDim2(float d) {dim2 = d;}
  CShape (float d1, float d2) {dim1 = d1; dim2 = d2;}
};


class CRectangle : public CShape
{
public:
  CRectangle(float d1, float d2): CShape(d1,d2) {}
  float area(){return getDim1()*getDim2();}
	void operator = (CRectangle);
	bool operator <(CRectangle);
	void operator !();
	CRectangle operator ++ ();
};

void CRectangle :: operator = (CRectangle r1)
{
	setDim1(r1.getDim1());
	setDim2(r1.getDim2());
}

bool CRectangle:: operator < (CRectangle r1)
{
	if ( area() < r1.area())
	return true;
	else
	return false;
}

void CRectangle :: operator ! ()
{
	float v;
	v=getDim1();
	setDim1(getDim2());
	setDim2(v);
}

CRectangle CRectangle::operator ++()
{
	setDim1(getDim1()+5);
	setDim2(getDim2()+5);
}

int main()
{
	CRectangle r1(2.0,3.0),r2(4.0,5.0);
	if(r1<r2)
	cout<<"area of r1 is less"<<endl;
	else
	cout<<"area of r1 is more"<<endl;
	r1=r2;
	cout<<"modified area of r1"<<endl;
	cout<<r1.area()<<endl;
	!r1;
	cout<<"modified area of r1"<<endl;
	cout<<r1.area()<<endl;
	++r1;
	cout<<"modified area of r1"<<endl;
	cout<<r1.area()<<endl;
	return 0;
}
