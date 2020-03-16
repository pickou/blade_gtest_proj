#include <iostream>
#include "thirdparty/gtest/gtest.h"
#include "proj/src/plus.h"


class TryTest: public ::testing::Test {
    protected:
        TryTest() {

        }

        ~TryTest() override {}

        void SetUp() override {}

        void TearDown() override {}
};

TEST_F(TryTest, MedthodAxB) {
    EXPECT_EQ(plus(2, 3), 6);
    EXPECT_EQ(plus(1, 5), 10);
}

