#include<iostream>
struct vector3d
{
	float x;
	float y;
	float z;//data
};

struct vector3d add(struct vector3d a, struct vector3d b)
{
	return vector3d {a.x+b.x , a.y+b.y , a.z+b.z};
}

struct vector3d subtract(struct vector3d a, struct vector3d b)
{
	return vector3d {a.x-b.x , a.y-b.y , a.z-b.z};
}

float dot(struct vector3d a, struct vector3d b)
{
	return ((a.x*b.x)+(a.y*b.y)+(a.z*b.z));
}

struct vector3d cross(struct vector3d a, struct vector3d b)
{
	return vector3d {((a.y*b.z)-(a.z*b.y)) , ((b.x*a.z)-(a.x*b.z)) , ((a.x*b.y)-(b.x*a.y))};
	
}

int main()
{
	vector3d a;
	vector3d b;
//	std::cout << "enter the first vector a value: "<<std::endl;
	std::cin >> a.x>> a.y >> a.z;
//	std::cout << "enter the second vector b value: "<<std::endl;
	std::cin >> b.x >> b.y >> b.z;
	std::cout << "\n";
	std::cout << add(a,b).x <<" "<<add(a,b).y<<" "<<add(a,b).z << std::endl;
	std::cout << subtract(a,b).x <<" "<<subtract(a,b).y<<" "<<subtract(a,b).z << std::endl;
	std::cout << dot(a,b) << std::endl;
	std::cout << cross(a,b).x <<" "<<cross(a,b).y<<" "<<cross(a,b).z << std::endl;
	return 0;
	
}
