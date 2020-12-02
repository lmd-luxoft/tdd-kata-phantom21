#pragma once
#include "pch.h"
#include "TestFixture.h"
#include <tuple>

struct Param
{
	char *s;
	int expected;
	Param(char *s, int expected) :
		s(s), expected(expected) {}
};
class TestFixtureWithParam : public TestFixture, public ::testing::WithParamInterface<Param>
{
};

