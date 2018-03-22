#include "HelloFunctions.h"
#include "gtest/gtest.h"

class CHelloTest : public ::testing::Test {
};

TEST_F(CHelloTest, CheckGetHello)
{
    ASSERT_TRUE(GetHello() == "Hello");
}

TEST_F(CHelloTest, GetAdressat)
{
    ASSERT_TRUE(GetAdressat("GitHub") == "GitHub");
    ASSERT_FALSE(GetAdressat("not GitHub") == "GitHub");
}
