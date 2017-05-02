#include<iostream>
#include"gtest/gtest.h"
#include"date.h"

TEST(TheDateProblem,C0)
{
	EXPECT_EQ(datePack(0,0,0),date(1811,5,13));
	EXPECT_EQ(datePack(0,0,0),date(2001,13,13));
	EXPECT_EQ(datePack(0,0,0),date(2004,2,30));
	EXPECT_EQ(datePack(2004,3,1),date(2004,2,29));
	EXPECT_EQ(datePack(2004,2,16),date(2004,2,15));
	EXPECT_EQ(datePack(0,0,0),date(2003,2,29));
	EXPECT_EQ(datePack(2003,3,1),date(2003,2,28));
	EXPECT_EQ(datePack(2003,2,16),date(2003,2,15));
	EXPECT_EQ(datePack(0,0,0),date(2003,3,32));
	EXPECT_EQ(datePack(2003,4,1),date(2003,3,31));
	EXPECT_EQ(datePack(2003,3,16),date(2003,3,15));
	EXPECT_EQ(datePack(2004,1,1),date(2003,12,31));
	EXPECT_EQ(datePack(0,0,0),date(2003,11,31));
	EXPECT_EQ(datePack(2003,12,1),date(2003,11,30));
	EXPECT_EQ(datePack(2003,11,15),date(2003,11,14));
}
TEST(TheDateProblem,C1)
{
	EXPECT_EQ(datePack(0,0,0),date(1811,5,13));
	EXPECT_EQ(datePack(0,0,0),date(2001,13,13));
	EXPECT_EQ(datePack(0,0,0),date(2004,2,30));
	EXPECT_EQ(datePack(2004,3,1),date(2004,2,29));
	EXPECT_EQ(datePack(2004,2,16),date(2004,2,15));
	EXPECT_EQ(datePack(0,0,0),date(2003,2,29));
	EXPECT_EQ(datePack(2003,3,1),date(2003,2,28));
	EXPECT_EQ(datePack(2003,2,16),date(2003,2,15));
	EXPECT_EQ(datePack(0,0,0),date(2003,3,32));
	EXPECT_EQ(datePack(2003,4,1),date(2003,3,31));
	EXPECT_EQ(datePack(2003,3,16),date(2003,3,15));
	EXPECT_EQ(datePack(2004,1,1),date(2003,12,31));
	EXPECT_EQ(datePack(0,0,0),date(2003,11,31));
	EXPECT_EQ(datePack(2003,12,1),date(2003,11,30));
	EXPECT_EQ(datePack(2003,11,15),date(2003,11,14));
}
TEST(TheDateProblem,C2)
{
	EXPECT_EQ(datePack(0,0,0),date(1811,5,13));
	EXPECT_EQ(datePack(0,0,0),date(2001,13,13));
	EXPECT_EQ(datePack(0,0,0),date(2004,2,30));
	EXPECT_EQ(datePack(2004,3,1),date(2004,2,29));
	EXPECT_EQ(datePack(2004,2,16),date(2004,2,15));
	EXPECT_EQ(datePack(0,0,0),date(2003,2,29));
	EXPECT_EQ(datePack(2003,3,1),date(2003,2,28));
	EXPECT_EQ(datePack(2003,2,16),date(2003,2,15));
	EXPECT_EQ(datePack(0,0,0),date(2003,3,32));
	EXPECT_EQ(datePack(2003,4,1),date(2003,3,31));
	EXPECT_EQ(datePack(2003,3,16),date(2003,3,15));
	EXPECT_EQ(datePack(2004,1,1),date(2003,12,31));
	EXPECT_EQ(datePack(0,0,0),date(2003,11,31));
	EXPECT_EQ(datePack(2003,12,1),date(2003,11,30));
	EXPECT_EQ(datePack(2003,11,15),date(2003,11,14));
}
TEST(TheDateProblem,MCDC)
{
	//go through all statement
	//go through all exit point
	//all branch taken
	EXPECT_EQ(datePack(0,0,0),date(1811,5,13));
	EXPECT_EQ(datePack(0,0,0),date(2001,13,13));
	EXPECT_EQ(datePack(0,0,0),date(2004,2,30));
	EXPECT_EQ(datePack(2004,3,1),date(2004,2,29));
	EXPECT_EQ(datePack(2004,2,16),date(2004,2,15));
	EXPECT_EQ(datePack(0,0,0),date(2003,2,29));
	EXPECT_EQ(datePack(2003,3,1),date(2003,2,28));
	EXPECT_EQ(datePack(2003,2,16),date(2003,2,15));
	EXPECT_EQ(datePack(0,0,0),date(2003,3,32));
	EXPECT_EQ(datePack(2003,4,1),date(2003,3,31));
	EXPECT_EQ(datePack(2003,3,16),date(2003,3,15));
	EXPECT_EQ(datePack(2004,1,1),date(2003,12,31));
	EXPECT_EQ(datePack(0,0,0),date(2003,11,31));
	EXPECT_EQ(datePack(2003,12,1),date(2003,11,30));
	EXPECT_EQ(datePack(2003,11,15),date(2003,11,14));
	//Boolean statement has been evaluated with true and false
	//Year data range
	EXPECT_EQ(datePack(0,0,0),date(1811,3,13));
	EXPECT_EQ(datePack(0,0,0),date(2013,3,13));
	//month data range
	EXPECT_EQ(datePack(0,0,0),date(2001,0,13));
	EXPECT_EQ(datePack(0,0,0),date(2001,13,13));
	//leap year true
	EXPECT_EQ(datePack(2004,1,2),date(2004,1,1));
	EXPECT_EQ(datePack(0,0,0),date(2004,2,0));
	EXPECT_EQ(datePack(0,0,0),date(2004,2,30));
	EXPECT_EQ(datePack(2004,3,1),date(2004,2,29));
	EXPECT_EQ(datePack(2004,2,16),date(2004,2,15));
	//leap year false
	EXPECT_EQ(datePack(2000,1,2),date(2000,1,1));
	EXPECT_EQ(datePack(2001,1,2),date(2001,1,1));
	EXPECT_EQ(datePack(0,0,0),date(2001,2,0));
	EXPECT_EQ(datePack(0,0,0),date(2001,2,29));
	EXPECT_EQ(datePack(2001,3,1),date(2001,2,28));
	EXPECT_EQ(datePack(2001,2,15),date(2001,2,14));
	EXPECT_EQ(datePack(2001,1,16),date(2001,1,15));
	EXPECT_EQ(datePack(2001,3,16),date(2001,3,15));
	EXPECT_EQ(datePack(2001,5,16),date(2001,5,15));
	EXPECT_EQ(datePack(2001,7,16),date(2001,7,15));
	EXPECT_EQ(datePack(2001,8,16),date(2001,8,15));
	EXPECT_EQ(datePack(2001,10,16),date(2001,10,15));
	EXPECT_EQ(datePack(2001,12,16),date(2001,12,15));
	EXPECT_EQ(datePack(0,0,0),date(2001,12,0));
	EXPECT_EQ(datePack(0,0,0),date(2001,12,32));
	EXPECT_EQ(datePack(2001,11,1),date(2001,10,31));
	EXPECT_EQ(datePack(2002,1,1),date(2001,12,31));
	EXPECT_EQ(datePack(0,0,0),date(2001,11,0));
	EXPECT_EQ(datePack(0,0,0),date(2001,11,31));
	EXPECT_EQ(datePack(2001,12,1),date(2001,11,30));
	EXPECT_EQ(datePack(2001,11,16),date(2001,11,15));

}

int main(int argc,char** argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}
