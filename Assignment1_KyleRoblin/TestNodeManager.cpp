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



void TestNodeManager::TestConstructor()
{
	Vector3 vec(1, 2, 3);

	CPPUNIT_ASSERT(vec.x == 1 && vec.y == 2 && vec.z == 3);
}

//void TestStudent::setUp()
//{
//}
//
//void TestStudent::TearDown()
//{
//}
//
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
//
//void TestStudent::TestGrades()
//{
//	Student std("Varian Wrenn", "123123");
//
//	std.assignGrade("Math", 12);
//	std.assignGrade("Physics", 10);
//	std.assignGrade("Political Science", 17);
//
//	CPPUNIT_ASSERT(std.getGrade("Math") == 12);
//	CPPUNIT_ASSERT(std.getGrade("Physics") == 10);
//	CPPUNIT_ASSERT(std.getGrade("Political Science") == 17);
//
//
//
//}
//
//void TestStudent::TestFindAverageGrades()
//{
//	Student std("Varian Wrenn", "123123");
//
//	std.assignGrade("Math", 12);
//	std.assignGrade("Physics", 10);
//	std.assignGrade("Political Science", 16);
//	std.assignGrade("Ethics", 14);
//
//	CPPUNIT_ASSERT_EQUAL((float)13, std.findAveGrade());
//}