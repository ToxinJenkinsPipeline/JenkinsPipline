#include<cppunit/config/SourcePrefix.h>
#include "TestNodeManager.h"

#include <iostream>
#include <string>



void TestNodeManager::SetUp()
{

}
void TestNodeManager::TearDown()
{

}


CPPUNIT_TEST_SUITE_REGISTRATION(TestNodeManager);

void TestNodeManager::TestConstructor()
{
	Vector3 vec(1, 2, 3);

	CPPUNIT_ASSERT(vec.x == 1 && vec.y == 2 && vec.z == 3);
}

void TestNodeManager::TestCompare()
{
	Vector3 vec1(1, 2, 3);
	Vector3 vec2(1, 2, 3);
	Vector3 vecTest;
	bool outcome = vecTest.Compare(vec1, vec2);

	CPPUNIT_ASSERT(outcome == true);
}

//CPPUNIT_TEST_SUITE_REGISTRATION(TestStudent);
//
//void TestStudent::TestConstructor()
//{
//	Student std("Varian Wrenn", "123123");
//
//	std::string student_name = std.getStdName();
//	CPPUNIT_ASSERT(student_name == "Varian Wrenn");
//
//	std::string student_number = std.getStdNumber();
//	CPPUNIT_ASSERT(student_number == "123123");
//
//	return;
//}