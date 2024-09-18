
/*










*/

#ifndef Cylinder_H
#define Cylinder_H

class Cylinder {
public:
	Cylinder();
	~Cylinder();

	void setRadius(float r);//Setter for radius

	float getRadius();//Getter for radius
		
	void setHeight(float h);//Setter for radius

	
	float getHeight();//Getter for radius

	float calcVolume();//Method for calculating volume

	float calcSurfArea();//Method for calculating surface area

private://Private class to intiate variable that will only be accessable to set class
	float pi = 3.14159;
	float radius ;
	float height ;
};

#endif // !Cylinder_H

