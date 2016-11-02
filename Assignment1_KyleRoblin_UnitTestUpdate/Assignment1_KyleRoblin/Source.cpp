#include "NodeManager.h"
#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/XmlOutputter.h>


int main(int argc, char *argv[])
{

	NodeManager nodeMngr;

	CPPUNIT_NS::Test *suite = CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest();
	CppUnit::TextUi::TestRunner runner;
	std::ofstream fs("Result.xml");
	CppUnit::XmlOutputter* outputter = new CppUnit::XmlOutputter(&runner.result(), fs);
	runner.setOutputter(outputter);

	runner.addTest(suite);
	bool wasSusseccful = runner.run();



	nodeMngr.ReadNodeList();
	std::cout << "List of nodes uncompared \n" << std::endl;
	nodeMngr.PrintNodeList();
	//nodeMngr.CompareNodeList(); //takes quite long to compare on school computers, but works correctly
	std::cout << "\nList of nodes after comparison \n" << std::endl;

	nodeMngr.PrintNodeList();

	return 0;
}