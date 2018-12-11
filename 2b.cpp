#include<iostream>
#include<vector>
using namespace std;

class vector3d
{
	private:
		float _x;
		float _y;
		float _z;

	public:
		void set_x(float x)
		{
			_x = x;
		}
		void set_y(float y)
		{
			_y = y;
		}
		void set_z(float z)
		{
			_z = z;
		}

		float get_x()
		{
			return _x;
		}
		float get_y()
		{
			return _y;
		}
		float get_z()
		{
			return _z;
		}
	public:
		
		vector3d() // default constructor
		{
			set_x(1);
			set_y(2);
			set_z(3);
		}
		
		vector3d(float x, float y, float z) // constructor
		{
			set_x(x);
			set_y(y);
			set_z(z);
		}

		vector3d(const vector3d &vecC) // copy constructor
		{
			set_x(vecC._x);
			set_y(vecC._y);
			set_z(vecC._z);
		}
	/*	~vector3d() // destructor
		{
			cout << "Destructor called" <<endl;
		} */
		
		vector3d add(vector3d b)
		{
			return vector3d {_x+b.get_x(), _y+b.get_y(), _z+b.get_z()};
		}
		
		vector3d subtract(vector3d b)
		{
			return vector3d {_x-b.get_x() , _y-b.get_y() , _z-b.get_z()};
		}
		
		float dot(vector3d b) 
		{
			return (_x*b.get_x()+_y*b.get_y() + _z*b.get_z()) ;
		}
		
		vector3d cross(vector3d b)
		{
			return vector3d {((_y*b.get_z())-(_z*b.get_y())) , ((b.get_x()*_z)-(_x*b.get_z())) , ((_x*b.get_y())-(b.get_x()*_y))};
		}
		
		//friend ostream& operator << (ostream &os, vector3d &v) ;
};

class Point
{
	float X , Y , Z;
	private:
		vector3d _pt;
	public:
		void setpt(vector3d pt)
		{
			_pt = pt;
		}
		float getptx()
		{
			X = (_pt.get_x());
			return X;
		}
		float getpty()
		{
			Y = (_pt.get_y());
			return Y;
		}
		float getptz()
		{
			Z = (_pt.get_z());
			return Z;
		}
			
		Point()
		{ 
			_pt = {0,0,0};
		}
		
		Point( vector3d pt)
		{
			setpt(pt);
		} 
		
};

class Line
{
	private:
		Point* pt1;
		Point* pt2;
};

class triangle
{
	private:
		Point* pt1;
		Point* pt2;
		Point* pt3;
};

class Graph
{
	private:
		vector <Point* > nodes;
		vector <Line* > edges;
};

int main()
{
	vector3d vecA;
	float x,y,z;
	cin >> x >> y >> z;
	vecA.set_x(x);
	vecA.set_y(y);
	vecA.set_z(z);
	//std::cin >> vecA.set_x()>> vecA.set_y()>> vecA.set_z();
	vector3d vecB;
	vector3d vecC = vecA; // copy initialiser is called
	cout << "vector A is:"<< vecA.get_x() << " " << vecA.get_y() << " " << vecA.get_z() << endl;
	cout <<"vector B is:"<< vecB.get_x() << " " << vecB.get_y() << " " << vecB.get_z() << endl;
	cout <<"vector C is:"<< vecC.get_x() << " " << vecC.get_y() << " " << vecC.get_z() << endl;
//	cout << "addition :" << (vecA.add(vecB)).get_x() << " " << (vecA.add(vecB)).get_y() << " " << (vecA.add(vecB)).get_z() << endl;
//	cout << "subtraction :" << (vecA.subtract(vecB)).get_x() << " " << (vecA.subtract(vecB)).get_y() << " " << (vecA.subtract(vecB)).get_z() << endl;
//	cout << "cross product :" << (vecA.cross(vecB)).get_x() << " " << (vecA.cross(vecB)).get_y() << " " << (vecA.cross(vecB)).get_z() << endl;
//	cout << "dot product :" << vecA.dot(vecB) << endl;
//	cout << vecA << endl;
	Point pt1(vecA);
	cout << "the point is:" << pt1.getptx() <<"," <<pt1.getpty() << "," <<pt1.getptz() << endl;
	return 0;
}
