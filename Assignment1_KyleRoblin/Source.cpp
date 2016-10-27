#include "NodeManager.h"



int main(int argc, char *argv[])
{
	NodeManager nodeMngr;

	nodeMngr.ReadNodeList();
	std::cout << "List of nodes uncompared \n" << std::endl;
	nodeMngr.PrintNodeList();
	nodeMngr.CompareNodeList();
	std::cout << "\nList of nodes after comparison \n" << std::endl;

	nodeMngr.PrintNodeList();

	return 0;
}