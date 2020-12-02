#include "pch.h"
#include "Calculator.h"
#include "TextFixture.h"


TEST_F(TextFixture, TestEmptyString) {
		//Arrange
		char* s = "";
		int expected = -1;
		//Act
		int actual = calc->Add(s);

		//Assert
		ASSERT_EQ(expected, actual);
}

TEST_F(TextFixture, TestOneArguments) {
	//Arrange
	char* s = "1";
	int expected = 1;
	//Act
	int actual = calc->Add(s);

	//Assert
	ASSERT_EQ(expected, actual);
}
TEST_F(TextFixture, TestTwoArguments) {
	//Arrange
	char* s = "1,2";
	int expected = 3;
	//Act
	int actual = calc->Add(s);

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TextFixture, TestThreeArguments) {
	//Arrange
	char* s = "1,2,3";
	int expected = 6;
	//Act
	int actual = calc->Add(s);

	//Assert
	ASSERT_EQ(expected, actual);
}


TEST_F(TextFixture, TestManyArguments) {
	//Arrange
	char* s = "1,2,3,4,5,6,7";
	int expected = 28;
	//Act
	int actual = calc->Add(s);

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TextFixture, TestWrongSyntax) {
	//Arrange
	char* s = "a";
	int expected = -3;
	//Act
	int actual = calc->Add(s);

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TextFixture, TestWrongDelimeter) {
	//Arrange
	char* s = "1,\n";
	int expected = -4;
	//Act
	int actual = calc->Add(s);

	//Assert
	ASSERT_EQ(expected, actual);
}
TEST_F(TextFixture, TestOtherDelimeter) {
	//Arrange
	char* s = "1\n2,3";
	int expected = 6;
	//Act
	int actual = calc->Add(s);

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TextFixture, TestSettingDelimeter) {
	//Arrange
	char* s = "//;\n1;2";
	int expected = 3;
	//Act
	int actual = calc->Add(s);

	//Assert
	ASSERT_EQ(expected, actual);
}

TEST_F(TextFixture, TestWrongAfterSettingDelimeter) {
	//Arrange
	char* s = "//;\n1,2";
	int expected = -5;
	//Act
	int actual = calc->Add(s);

	//Assert
	ASSERT_EQ(expected, actual);
}


