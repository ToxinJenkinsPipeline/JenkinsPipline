#ifndef TestNodeManager_H
#define TestNodeManager_H

#include <cppunit/extensions/HelperMacros.h>
#include "NodeManager.h"

class TestNodeManager : public CPPUNIT_NS::TestFixture
{
	
	//CPPUNIT_TEST_SUITE(TestNodeManager);
	//CPPUNIT_TEST(TestConstructor);
	//CPPUNIT_TEST(TestGrades);
	//CPPUNIT_TEST(TestFindAverageGrades);
	//CPPUNIT_TEST_SUITE_END();
public:
	/*void setUp();
	void TearDown();
	void TestConstructor();
	void TestGrades();
	void TestFindAverageGrades();*/
	void SetUp();
	void TearDown();
	void TestConstructor();
};
#endif 
