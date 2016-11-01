#pragma once

#include <cppunit/extensions/HelperMacros.h>
#include "NodeManager.h"

class TestNodeManager : public CPPUNIT_NS::TestFixture
{
	
	CPPUNIT_TEST_SUITE(TestNodeManager);
	CPPUNIT_TEST(TestConstructor);
	CPPUNIT_TEST(TestCompare);
	CPPUNIT_TEST_SUITE_END();
public:
	/*
	void setUp();
	void TearDown();
	void TestConstructor();
	*/
	void SetUp();
	void TearDown();
	void TestConstructor();
	void TestCompare();
};
