#include "pch.h"
#include "../include/Prefix.h"

TEST(PrefixCheck, Empty)
{
    EXPECT_TRUE(StartsWith("", ""));
}

TEST(PrefixCheck, EmptyPrefix)
{
    EXPECT_TRUE(StartsWith("hello", ""));
}

TEST(PrefixCheck, Equal)
{
    EXPECT_TRUE(StartsWith("hello", "hello"));
}

TEST(PrefixCheck, Bigger)
{
    EXPECT_FALSE(StartsWith("hello", "helloworld"));
}

TEST(PrefixCheck, Smaller)
{
    EXPECT_TRUE(StartsWith("hello", "hel"));
}

TEST(PrefixCheck, NonPrefix)
{
    EXPECT_FALSE(StartsWith("hello", "world"));
}

TEST(PrefixCheck, NotFullPrefix)
{
    EXPECT_FALSE(StartsWith("hello", "her"));
}
