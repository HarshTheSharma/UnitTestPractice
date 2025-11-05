/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, two_leading_letters)
{
	Password my_password;
	int actual = my_password.count_leading_characters("aab");
	ASSERT_EQ(2, actual);
}

TEST(PasswordTest, repeated_leading_character)
{
	Password my_password;
	int actual = my_password.count_leading_characters("aaab");
	ASSERT_EQ(3, actual);
}

TEST(PasswordTest, has_mixed_case_true)
{
	Password my_password;
	bool actual = my_password.has_mixed_case("aB");
	ASSERT_TRUE(actual);
}

TEST(PasswordTest, has_mixed_case_false)
{
	Password my_password;
	bool actual = my_password.has_mixed_case("aa");
	ASSERT_FALSE(actual);
}
