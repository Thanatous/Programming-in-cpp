#include "Variables.h"
#include <gtest/gtest.h>

class TestVariables : public  ::testing::Test{

};

TEST_F(TestVariables, CheckVariableOfSquareCilindrOneRightType){

    EXPECT_DOUBLE_EQ(Rc1, -2);
    EXPECT_DOUBLE_EQ(Rc1, 0);
    EXPECT_DOUBLE_EQ(Rc1, 'a');

}

TEST_F(TestVariables, CheckVariableOfSquareCilindrTwoRightType){

    EXPECT_DOUBLE_EQ(Hc1, -2);
    EXPECT_DOUBLE_EQ(Hc1, 0);
    EXPECT_DOUBLE_EQ(Hc1, 'a');
}

TEST_F(TestVariables, CheckVariableOfVolumeCilindrOneRightType){

    EXPECT_DOUBLE_EQ(Rc2, -2);
    EXPECT_DOUBLE_EQ(Rc2, 0);
    EXPECT_DOUBLE_EQ(Rc2, 'a');
}

TEST_F(TestVariables, CheckVariableOfVolumeCilindrTwoRightType){

    EXPECT_DOUBLE_EQ(Hc2, -2);
    EXPECT_DOUBLE_EQ(Hc2, 0);
    EXPECT_DOUBLE_EQ(Hc2, 'a');
}

TEST_F(TestVariables, CheckVariableOfSquareToroidOneRightType){

    EXPECT_DOUBLE_EQ(Rt1, -2);
    EXPECT_DOUBLE_EQ(Rt1, 0);
    EXPECT_DOUBLE_EQ(Rt1, 'a');
}

TEST_F(TestVariables, CheckVariableOfSquareToroidTwoRightType){

    EXPECT_DOUBLE_EQ(rt1, -2);
    EXPECT_DOUBLE_EQ(rt1, 0);
    EXPECT_DOUBLE_EQ(rt1, 'a');
}

TEST_F(TestVariables, CheckVariableOfVolumeToroidOneRightType){

    EXPECT_DOUBLE_EQ(Rt2, -2);
    EXPECT_DOUBLE_EQ(Rt2, 0);
    EXPECT_DOUBLE_EQ(Rt2, 'a');
}

TEST_F(TestVariables, CheckVariableOfVolumeToroidTwoRightType){

    EXPECT_DOUBLE_EQ(rt2, -2);
    EXPECT_DOUBLE_EQ(rt2, 0);
    EXPECT_DOUBLE_EQ(rt2, 'a');
}
