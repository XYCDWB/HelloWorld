#include "Shape.h"


float Shape::Area(float x, float y)
{
	s_x = x;
	s_y = y;
	return s_x * s_y;
}
