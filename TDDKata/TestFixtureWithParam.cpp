#include "pch.h"
#include "TestFixtureWithParam.h"
#include <vector>

//INSTANTIATE_TEST_CASE_P(ParametrizedTest, TestFixtureWithParam,
//	::testing::Values(Param("2,3",5), Param("4",4)))

std::vector<Param> CreateParametersSet()
{
	std::vector<Param> p;
	p.push_back(Param("", -1));
	p.push_back(Param("1", 1));
	p.push_back(Param("1,2", 3));
	p.push_back(Param("1,2,3", 6));
	p.push_back(Param("1,2,3,4,5,6,7", 28));
	p.push_back(Param("a", -3));
	p.push_back(Param("1,\n", -4));
	p.push_back(Param("1\n2,3", 6));
	p.push_back(Param("//;\n1;2", 3));
	p.push_back(Param("//;\n1,2", -5));
	return p;
}

INSTANTIATE_TEST_CASE_P(ParametrizedTest, TestFixtureWithParam,
	::testing::ValuesIn(CreateParametersSet()));