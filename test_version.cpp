#include "lib.h"
#include <gtest/gtest.h>

TEST(version,val)
{
	ASSERT_GE(version(), 0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}

