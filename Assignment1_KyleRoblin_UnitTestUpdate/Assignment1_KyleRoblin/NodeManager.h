#pragma once
#include <vector>
#include <fstream>
#include <iostream>
#include "Vector3.h"
#define MaxNodeList 40


class NodeManager
{
	//std::ifstream inputFile;
	Vector3 vctr;
	int AmountRemoved;
public:
	std::vector<Vector3> node;
	
	NodeManager();
	~NodeManager();
	void ReadNodeList();
	void CompareNodeList();
	void PrintNodeList() const;
	void PrintRawData() const;
	void WriteNodeList();
};

