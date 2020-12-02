#pragma once
#include "pch.h"
#include "Calculator.h"

class TextFixture : public ::testing::Test
{
protected:
	Calculator* calc;
	void SetUp() override
	{
		calc = new Calculator();
	}
	void TearDown() override
	{
		delete calc;
	}
};

