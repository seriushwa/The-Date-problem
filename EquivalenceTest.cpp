#include<iostream>
#include"gtest/gtest.h"
#include"date.h"

TEST(TheDateProblem,Equivalence)
{
EXPECT_EQ(datePack(1993	,6	,16	),date(1993	,6	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,6	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1993	,13	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1993	,6	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,6	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1993	,0	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1993	,6	,0	));

EXPECT_EQ(datePack(0	,0	,0	),date(1811	,13	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,6	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1993	,13	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,0	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,6	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(1993	,0	,0	));

EXPECT_EQ(datePack(0	,0	,0	),date(1811	,13	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,0	,0	));

EXPECT_EQ(datePack(1993	,7	,16	),date(1993	,7	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,7	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1993	,13	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1993	,7	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,7	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1993	,0	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1993	,7	,0	));

EXPECT_EQ(datePack(0	,0	,0	),date(1811	,13	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1993	,13	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,7	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,0	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,7	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(1993	,0	,0	));

EXPECT_EQ(datePack(0	,0	,0	),date(1811	,13	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,0	,0	));

EXPECT_EQ(datePack(1993	,2	,16	),date(1993	,2	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,2	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1993	,2	,29	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,2	,29	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,2	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1993	,2	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,2	,0	));

EXPECT_EQ(datePack(1992	,2	,16	),date(1992	,2	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,2	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1992	,2	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,2	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1992	,2	,0	));

EXPECT_EQ(datePack(0	,0	,0	),date(1811	,2	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,2	,0	));

EXPECT_EQ(datePack(2000	,2	,16	),date(2000	,2	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,2	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(2000	,2	,29	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,2	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(2000	,2	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,2	,0	));

EXPECT_EQ(datePack(0	,0	,0	),date(1811	,2	,29	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,2	,0	));
}


int main(int argc,char** argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}
