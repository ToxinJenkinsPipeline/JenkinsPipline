#pragma once
#include <vector>
#define MinDistance .1
class Vector3
{
protected:

public:
	float x, y, z;
	Vector3();
	Vector3(float xVec,float yVec,float zVec);
	bool Compare(Vector3 vec1, Vector3 vec2);
	~Vector3();
};

