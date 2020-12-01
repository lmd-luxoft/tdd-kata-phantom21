#include "pch.h"
#include "Calculator.h"

TEST(TDDKata, TestEmptyString) {
		//Arrange
		char* s = "";
		int expected = -1;
		Calculator calc;
		//Act
		int actual = calc.Add(s);

		//Accert
		ASSERT_EQ(expected, actual);
}

TEST(TDDKata, TestOneArguments) {
	//Arrange
	char* s = "1";
	int expected = 1;
	Calculator calc;
	//Act
	int actual = calc.Add(s);

	//Accert
	ASSERT_EQ(expected, actual);
}
TEST(TDDKata, TestTwoArguments) {
	//Arrange
	char* s = "1,2";
	int expected = 3;
	Calculator calc;
	//Act
	int actual = calc.Add(s);

	//Accert
	ASSERT_EQ(expected, actual);
}

TEST(TDDKata, TestThreeArguments) {
	//Arrange
	char* s = "1,2,3";
	int expected = 6;
	Calculator calc;
	//Act
	int actual = calc.Add(s);

	//Accert
	ASSERT_EQ(expected, actual);
}


TEST(TDDKata, TestManyArguments) {
	//Arrange
	char* s = "1,2,3,4,5,6,7";
	int expected = 28;
	Calculator calc;
	//Act
	int actual = calc.Add(s);

	//Accert
	ASSERT_EQ(expected, actual);
}

TEST(TDDKata, TestWrongSyntax) {
	//Arrange
	char* s = "a";
	int expected = -3;
	Calculator calc;
	//Act
	int actual = calc.Add(s);

	//Accert
	ASSERT_EQ(expected, actual);
}

TEST(TDDKata, TestWrongDelimeter) {
	//Arrange
	char* s = "1,\n";
	int expected = -4;
	Calculator calc;
	//Act
	int actual = calc.Add(s);

	//Accert
	ASSERT_EQ(expected, actual);
}
TEST(TDDKata, TestOtherDelimeter) {
	//Arrange
	char* s = "1\n2,3";
	int expected = 6;
	Calculator calc;
	//Act
	int actual = calc.Add(s);

	//Accert
	ASSERT_EQ(expected, actual);
}

TEST(TDDKata, TestSettingDelimeter) {
	//Arrange
	char* s = "//;\n1;2";
	int expected = 3;
	Calculator calc;
	//Act
	int actual = calc.Add(s);

	//Accert
	ASSERT_EQ(expected, actual);
}

TEST(TDDKata, TestWrongAfterSettingDelimeter) {
	//Arrange
	char* s = "//;\n1,2";
	int expected = -5;
	Calculator calc;
	//Act
	int actual = calc.Add(s);

	//Accert
	ASSERT_EQ(expected, actual);
}


