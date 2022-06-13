#include "../../pch.h"
#include "../include/brackets.h"

TEST(BracketsCheck, Easy)
{
    EXPECT_TRUE(isValid("[]"));
    EXPECT_TRUE(isValid("{}"));
    EXPECT_TRUE(isValid("()"));
}

TEST(BracketsCheck, Subexpressions_Positive)
{
    EXPECT_TRUE(isValid("[{()}]"));
    EXPECT_TRUE(isValid("[(){}]"));
    EXPECT_TRUE(isValid("({}[()])"));
}

TEST(BracketsCheck, OneSymbol)
{
    EXPECT_FALSE(isValid("["));
    EXPECT_FALSE(isValid("]"));
    EXPECT_FALSE(isValid("("));
    EXPECT_FALSE(isValid(")"));
    EXPECT_FALSE(isValid("{"));
    EXPECT_FALSE(isValid("}"));
}

TEST(BracketsCheck, NotClosedOrOpened)
{
    EXPECT_FALSE(isValid("[["));
    EXPECT_FALSE(isValid("]]"));
    EXPECT_FALSE(isValid("(["));
    EXPECT_FALSE(isValid("(){"));
    EXPECT_FALSE(isValid(")[]("));
}

TEST(BracketsCheck, AntiCounter)
{
    EXPECT_FALSE(isValid("(]"));
    EXPECT_FALSE(isValid("(}"));
    EXPECT_FALSE(isValid("(()][)"));

}

TEST(BracketsCheck, Empty)
{
    EXPECT_TRUE(isValid(""));
}

TEST(BracketsCheck, Simple)
{
    EXPECT_TRUE(isValid("{}"));
    EXPECT_TRUE(isValid("()"));
    EXPECT_TRUE(isValid("[]"));
}

TEST(BracketsCheck, AdditionalData)
{
    EXPECT_TRUE(isValid("{a}"));
    EXPECT_TRUE(isValid("(b)"));
    EXPECT_TRUE(isValid("[c]"));
    EXPECT_TRUE(isValid("{a(b)c}"));
    EXPECT_FALSE(isValid("(a[b)c]a"));
    EXPECT_TRUE(isValid("aa"));
}

TEST(BracketsCheck, Subexpression_Negative)
{
    EXPECT_FALSE(isValid("([)]"));
    EXPECT_FALSE(isValid("[{({)}]"));
}