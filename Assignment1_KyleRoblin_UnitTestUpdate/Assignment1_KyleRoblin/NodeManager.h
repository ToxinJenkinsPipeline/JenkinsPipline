#pragma once
#include <vector>
#include <fstream>
#include <iostream>
#include "Vector3.h"
#define MaxNodeList 40


class NodeManager
{
	//std::ifstream inputFile;
	std::vector<Vector3> node;
	Vector3 vctr;
	int AmountRemoved;
public:
	
	NodeManager();
	~NodeManager();
	void ReadNodeList();
	void CompareNodeList();
	void PrintNodeList() const;
	void WriteNodeList();
};

