#include "pch.h"
#include "Calculator.h"
#include "TestFixture.h"
#include "TestFixtureWithParam.h"

TEST_P(TestFixtureWithParam, AllTests)
{
	//Arrange
	char *s = GetParam().s;
	int expected = GetParam().expected;
	//Act
	int actual = calc->Add(s);
	//Assert
	ASSERT_EQ(expected, actual);


}
TEST_F(TestFixture, TestEmptyString) {
		//Arrange
		char* s = "";
		int expected = -1;
		//Act
		int actual = calc->Add(s);

		//Assert
		ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, TestOneArguments) {
	//Arrange
	char* s = "1";
	int expected = 1;
	//Act
	int actual = calc->Add(s);

	//Assert
	ASSERT_EQ(expected, actual);
}
TEST_F(TestFixture, TestTwoArguments) {
	//Arrange
	char* s = "1,2";
	int expected = 3;
	//Act
	int actual = calc->Add(s);

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, TestThreeArguments) {
	//Arrange
	char* s = "1,2,3";
	int expected = 6;
	//Act
	int actual = calc->Add(s);

	//Assert
	ASSERT_EQ(expected, actual);
}


TEST_F(TestFixture, TestManyArguments) {
	//Arrange
	char* s = "1,2,3,4,5,6,7";
	int expected = 28;
	//Act
	int actual = calc->Add(s);

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, TestWrongSyntax) {
	//Arrange
	char* s = "a";
	int expected = -3;
	//Act
	int actual = calc->Add(s);

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, TestWrongDelimeter) {
	//Arrange
	char* s = "1,\n";
	int expected = -4;
	//Act
	int actual = calc->Add(s);

	//Assert
	ASSERT_EQ(expected, actual);
}
TEST_F(TestFixture, TestOtherDelimeter) {
	//Arrange
	char* s = "1\n2,3";
	int expected = 6;
	//Act
	int actual = calc->Add(s);

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, TestSettingDelimeter) {
	//Arrange
	char* s = "//;\n1;2";
	int expected = 3;
	//Act
	int actual = calc->Add(s);

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TestFixture, TestWrongAfterSettingDelimeter) {
	//Arrange
	char* s = "//;\n1,2";
	int expected = -5;
	//Act
	int actual = calc->Add(s);

	//Assert
	ASSERT_EQ(expected, actual);
}


