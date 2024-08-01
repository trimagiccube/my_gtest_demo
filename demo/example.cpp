#include <gtest/gtest.h>

// 被测试的函数
int add(int a, int b) {
	return a + b;
}

// 测试用例
TEST(AddTest, PositiveNumbers) {
	EXPECT_EQ(add(1, 2), 3);
	EXPECT_EQ(add(2, 3), 5);
}

TEST(AddTest, NegativeNumbers) {
	EXPECT_EQ(add(-1, -1), -2);
	EXPECT_EQ(add(-1, 1), 0);
}

#if 0
/* failed case*/
TEST(AddTest, Failedresult) {
	EXPECT_EQ(add(-1, -1), -2);
	EXPECT_EQ(add(-1, 1), 1);
}
#endif
int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
