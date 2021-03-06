#include "NodeManager.h"
#include <string>
#include <sstream>
#include <stdlib.h>
#include <zlib.h>

using namespace std;

NodeManager::NodeManager()
	:AmountRemoved(0)
{
	stringLineBuffer.resize(MaxNodeList);
}
NodeManager::~NodeManager()
{
}

void NodeManager::ReadNodeList()
{
	node.resize(MaxNodeList);
	ifstream inputFile;
	inputFile.open("NodeInput.txt");

	float tempArr[3] = { 0,0,0 };
	string line;
	int iter = 0;
	while (getline(inputFile, line))
	{

		istringstream strStream(line);
		int counter = 0;
		while (getline(strStream, line, ',')) //iterate for x,y,z and skip commas
		{
			float data = std::stof(line);
			tempArr[counter] = data;
			counter++;
		}

		node[iter].x = tempArr[0];
		node[iter].y = tempArr[1];
		node[iter].z = tempArr[2];
		iter++;
	}

}
void NodeManager::CompareNodeList()
{

	for (int i = 0; i < MaxNodeList - AmountRemoved; i++)
	{
		for (int j = 1; j < (MaxNodeList - i) - AmountRemoved; j++)
		{
			if (vctr.Compare(node[i], node[j]) == true)
			{
				node.erase(node.begin() + j);
				AmountRemoved++;
			}// if true then erase j-th element
		}
	}
}

void NodeManager::PrintNodeList() const
{

	for (int i = 0; i < MaxNodeList - AmountRemoved; i++)
	{
		cout << "Node " << i + 1 << ": " << node[i].x << " | " << node[i].y << " | " << node[i].z << endl;
	}
}

void NodeManager::PrintRawData() const
{
	for (int i = 0; i < MaxNodeList - AmountRemoved; i++)
	{
		cout << node[i].x << " " << node[i].y << " " << node[i].z << endl;
	}

}

//used hamelet.io to learn how to use zlib gzfile stuff
void NodeManager::FillStringBuffer()
{
	gzFile myGzFile;
	myGzFile = gzopen("ZLibResult.xml", "wb");
	for (int i = 0; i < MaxNodeList; i++)
	{
		ostringstream strStrm;
		strStrm << node[i].x + node[i].y + node[i].z;
		unsigned long int fileSize = sizeof(char) * strStrm.str().size();
		gzwrite(myGzFile, (void*)&fileSize, sizeof(fileSize));
		gzwrite(myGzFile, (void*)(strStrm.str().data()), fileSize);

	}
	gzclose(myGzFile);
}
