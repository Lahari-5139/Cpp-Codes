#include<iostream>
#include<vector>

class Polygon
{

};

class Quadrilateral
{
	
};

class Point
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
		
	 Point() // default constructor
		{
			set_x(1);
			set_y(2);
			set_z(3);
		}
		
	 Point(float x, float y, float z) // constructor
		{
			set_x(x);
			set_y(y);
			set_z(z);
		}

	 Point(const Point &vecC) // copy constructor
		{
			set_x(vecC._x);
			set_y(vecC._y);
			set_z(vecC._z);
		}
	/*	 Point
	() // destructor
		{
			cout << "Destructor called" <<endl;
		} */
		
	 Point add (Point b)
		{
			return Point{_x+b.get_x(), _y+b.get_y(), _z+b.get_z()};
		}
		
	 Point subtract (Point b)
		{
			return Point{_x-b.get_x() , _y-b.get_y() , _z-b.get_z()};
		}
		
		float dot (Point b) 
		{
			return (_x*b.get_x()+_y*b.get_y() + _z*b.get_z()) ;
		}
		
	 Point cross (Point b)
		{
			return Point{((_y*b.get_z())-(_z*b.get_y())) , ((b.get_x()*_z)-(_x*b.get_z())) , ((_x*b.get_y())-(b.get_x()*_y))};
		}
		
		//friend ostream& operator << (ostream &os, Point &v) ;
};

