#pragma once
#include <vector>
#include <fstream>
#include <iostream>
#include "Vector3.h"
#define MaxNodeList 40


class NodeManager
{
	
	Vector3 vctr;
	int AmountRemoved;
public:
	std::vector<Vector3> node;
	std::vector<std::string> stringLineBuffer;
	
	NodeManager();
	~NodeManager();
	void ReadNodeList();
	void CompareNodeList();
	void PrintNodeList() const;
	void PrintRawData() const;
	void FillStringBuffer();
};

