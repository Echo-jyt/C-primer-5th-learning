#include "Point.h"


int Point::GetX()
{
	return xx;
}

int Point::GetY() 
{
	return yy;
}

Point::Point(int x1, int y1) 
{
	xx = x1;
	yy = y1;
}
Point::Point()
{

}