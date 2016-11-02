#include "Vector3.h"

Vector3::Vector3()
{

}

Vector3::Vector3(float xVec, float yVec, float zVec)
	:x(xVec)
	,y(yVec)
	,z(zVec)
{
}

//compare nodes to be greater than MinDistance away from each other for one of their points
bool Vector3::Compare(Vector3 vec1, Vector3 vec2)
{
	float sumVecX = vec1.x - vec2.x;
	float sumVecY = vec1.y - vec2.y;
	float sumVecZ = vec1.z - vec2.z;
	if ((sumVecX <= MinDistance) && (sumVecX >= -MinDistance))
	{
		if ((sumVecY <= MinDistance) && (sumVecY >= -MinDistance))
		{
			if ((sumVecZ <= MinDistance) && (sumVecZ >= -MinDistance))
			{
				return true;
			}	
		}
	}

	// this is a useless comment
	return false;
}

Vector3::~Vector3()
{
}
