#include<iostream>
#include"gtest/gtest.h"
#include"date.h"


TEST(TheDataProblem,DecisionTable)
{

EXPECT_EQ(datePack(2001	,4	,16	),date(2001	,4	,15	));
EXPECT_EQ(datePack(2001	,5	,1	),date(2001	,4	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2001	,4	,31	));
EXPECT_EQ(datePack(2001	,1	,16	),date(2001	,1	,15	));
EXPECT_EQ(datePack(2001	,2	,1	),date(2001	,1	,31	));
EXPECT_EQ(datePack(2001	,12	,16	),date(2001	,12	,15	));
EXPECT_EQ(datePack(2002	,1	,1	),date(2001	,12	,31	));
EXPECT_EQ(datePack(2001	,2	,16	),date(2001	,2	,15	));
EXPECT_EQ(datePack(2004	,2	,29	),date(2004	,2	,28	));
EXPECT_EQ(datePack(2001	,3	,1	),date(2001	,2	,28	));
EXPECT_EQ(datePack(2004	,3	,1	),date(2004	,2	,29	));
EXPECT_EQ(datePack(0	,0	,0	),date(2001	,2	,29	));
EXPECT_EQ(datePack(0	,0	,0	),date(2001	,2	,30	));

}


int main(int argc,char** argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}
