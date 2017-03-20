#include<iostream>
#include"gtest/gtest.h"
struct datePack
{
	datePack(int a,int b,int c)
	{
		year=a;
		month=b;
		day=c;
	}
	bool operator==(const datePack& right)const
	{
		if(year != right.year)return false;
		if(month != right.month)return false;
		if(day != right.day)return false;
		return true;
	}
	int year;
	int month;
	int day;
};

datePack date(int year,int month,int day)
{
	datePack result(0,0,0);
	bool leap = false;
	if(year<1812 || year>2012)return result;
	if((year%4==0)&&(year%400!=0))leap = true;
	if(month<1||month>12)return result;
	if(month==2)
	{
		if(leap)
		{
			if(day<1 || day>29)return result;
			result.day = (day==29?1:day+1);
			result.month = (day==29?3:2);
			result.year = year;
		}
		else
		{
			if(day<1 || day>28)return result;
			result.day = (day==28?1:day+1);
			result.month = (day==28?3:2);
			result.year = year;
		}
	}
	else if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
	{
		if(day<1||day>31)return result;
		result.day = (day==31?1:day+1);
		result.month = (day==31?month+1:month);
		result.year = (result.month==13?year+1:year);
		result.month = (result.month==13?1:result.month);
	}
	else
	{
		if(day<1||day>30)return result;
		result.day = (day==30?1:day+1);
		result.month = (day==30?month+1:month);
		result.year = (result.month==13?year+1:year);
		result.month = (result.month==13?1:result.month);
	}
	return result;

}



TEST(TheDateProblem,boundary)
{
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,0	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,0	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,0	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,0	,16	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,0	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,0	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,0	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,1	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,1	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,1	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,1	,16	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,1	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,1	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,1	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,2	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,2	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,2	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,2	,14	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,2	,27	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,2	,28	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,2	,29	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,2	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,6	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,6	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,6	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,6	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,6	,29	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,6	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,6	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,11	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,11	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,11	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,11	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,11	,29	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,11	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,11	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,12	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,12	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,12	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,12	,16	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,12	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,12	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,12	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,13	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,13	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,13	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,13	,16	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,13	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,13	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1811	,13	,32	));

EXPECT_EQ(datePack(0	,0	,0	),date(1812	,0	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,0	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,0	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,0	,16	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,0	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,0	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,0	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,1	,0	));
EXPECT_EQ(datePack(1812	,1	,2	),date(1812	,1	,1	));
EXPECT_EQ(datePack(1812	,1	,3	),date(1812	,1	,2	));
EXPECT_EQ(datePack(1812	,1	,17	),date(1812	,1	,16	));
EXPECT_EQ(datePack(1812	,1	,31	),date(1812	,1	,30	));
EXPECT_EQ(datePack(1812	,2	,1	),date(1812	,1	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,1	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,2	,0	));
EXPECT_EQ(datePack(1812	,2	,2	),date(1812	,2	,1	));
EXPECT_EQ(datePack(1812	,2	,3	),date(1812	,2	,2	));
EXPECT_EQ(datePack(1812	,2	,15	),date(1812	,2	,14	));
EXPECT_EQ(datePack(1812	,2	,28	),date(1812	,2	,27	));
EXPECT_EQ(datePack(1812	,2	,29	),date(1812	,2	,28	));
EXPECT_EQ(datePack(1812	,3	,1	),date(1812	,2	,29	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,2	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,6	,0	));
EXPECT_EQ(datePack(1812	,6	,2	),date(1812	,6	,1	));
EXPECT_EQ(datePack(1812	,6	,3	),date(1812	,6	,2	));
EXPECT_EQ(datePack(1812	,6	,16	),date(1812	,6	,15	));
EXPECT_EQ(datePack(1812	,6	,30	),date(1812	,6	,29	));
EXPECT_EQ(datePack(1812	,7	,1	),date(1812	,6	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,6	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,11	,0	));
EXPECT_EQ(datePack(1812	,11	,2	),date(1812	,11	,1	));
EXPECT_EQ(datePack(1812	,11	,3	),date(1812	,11	,2	));
EXPECT_EQ(datePack(1812	,11	,16	),date(1812	,11	,15	));
EXPECT_EQ(datePack(1812	,11	,30	),date(1812	,11	,29	));
EXPECT_EQ(datePack(1812	,12	,1	),date(1812	,11	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,11	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,12	,0	));
EXPECT_EQ(datePack(1812	,12	,2	),date(1812	,12	,1	));
EXPECT_EQ(datePack(1812	,12	,3	),date(1812	,12	,2	));
EXPECT_EQ(datePack(1812	,12	,17	),date(1812	,12	,16	));
EXPECT_EQ(datePack(1812	,12	,31	),date(1812	,12	,30	));
EXPECT_EQ(datePack(1813	,1	,1	),date(1812	,12	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,12	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,13	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,13	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,13	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,13	,16	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,13	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,13	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1812	,13	,32	));

EXPECT_EQ(datePack(0	,0	,0	),date(1813	,0	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,0	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,0	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,0	,16	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,0	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,0	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,0	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,1	,0	));
EXPECT_EQ(datePack(1813	,1	,2	),date(1813	,1	,1	));
EXPECT_EQ(datePack(1813	,1	,3	),date(1813	,1	,2	));
EXPECT_EQ(datePack(1813	,1	,17	),date(1813	,1	,16	));
EXPECT_EQ(datePack(1813	,1	,31	),date(1813	,1	,30	));
EXPECT_EQ(datePack(1813	,2	,1	),date(1813	,1	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,1	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,2	,0	));
EXPECT_EQ(datePack(1813	,2	,2	),date(1813	,2	,1	));
EXPECT_EQ(datePack(1813	,2	,3	),date(1813	,2	,2	));
EXPECT_EQ(datePack(1813	,2	,15	),date(1813	,2	,14	));
EXPECT_EQ(datePack(1813	,2	,28	),date(1813	,2	,27	));
EXPECT_EQ(datePack(1813	,3	,1	),date(1813	,2	,28	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,2	,29	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,2	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,6	,0	));
EXPECT_EQ(datePack(1813	,6	,2	),date(1813	,6	,1	));
EXPECT_EQ(datePack(1813	,6	,3	),date(1813	,6	,2	));
EXPECT_EQ(datePack(1813	,6	,16	),date(1813	,6	,15	));
EXPECT_EQ(datePack(1813	,6	,30	),date(1813	,6	,29	));
EXPECT_EQ(datePack(1813	,7	,1	),date(1813	,6	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,6	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,11	,0	));
EXPECT_EQ(datePack(1813	,11	,2	),date(1813	,11	,1	));
EXPECT_EQ(datePack(1813	,11	,3	),date(1813	,11	,2	));
EXPECT_EQ(datePack(1813	,11	,16	),date(1813	,11	,15	));
EXPECT_EQ(datePack(1813	,11	,30	),date(1813	,11	,29	));
EXPECT_EQ(datePack(1813	,12	,1	),date(1813	,11	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,11	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,12	,0	));
EXPECT_EQ(datePack(1813	,12	,2	),date(1813	,12	,1	));
EXPECT_EQ(datePack(1813	,12	,3	),date(1813	,12	,2	));
EXPECT_EQ(datePack(1813	,12	,17	),date(1813	,12	,16	));
EXPECT_EQ(datePack(1813	,12	,31	),date(1813	,12	,30	));
EXPECT_EQ(datePack(1814	,1	,1	),date(1813	,12	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,12	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,13	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,13	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,13	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,13	,16	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,13	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,13	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1813	,13	,32	));

EXPECT_EQ(datePack(0	,0	,0	),date(1912	,0	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,0	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,0	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,0	,16	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,0	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,0	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,0	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,1	,0	));
EXPECT_EQ(datePack(1912	,1	,2	),date(1912	,1	,1	));
EXPECT_EQ(datePack(1912	,1	,3	),date(1912	,1	,2	));
EXPECT_EQ(datePack(1912	,1	,17	),date(1912	,1	,16	));
EXPECT_EQ(datePack(1912	,1	,31	),date(1912	,1	,30	));
EXPECT_EQ(datePack(1912	,2	,1	),date(1912	,1	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,1	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,2	,0	));
EXPECT_EQ(datePack(1912	,2	,2	),date(1912	,2	,1	));
EXPECT_EQ(datePack(1912	,2	,3	),date(1912	,2	,2	));
EXPECT_EQ(datePack(1912	,2	,15	),date(1912	,2	,14	));
EXPECT_EQ(datePack(1912	,2	,28	),date(1912	,2	,27	));
EXPECT_EQ(datePack(1912	,2	,29	),date(1912	,2	,28	));
EXPECT_EQ(datePack(1912	,3	,1	),date(1912	,2	,29	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,2	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,6	,0	));
EXPECT_EQ(datePack(1912	,6	,2	),date(1912	,6	,1	));
EXPECT_EQ(datePack(1912	,6	,3	),date(1912	,6	,2	));
EXPECT_EQ(datePack(1912	,6	,16	),date(1912	,6	,15	));
EXPECT_EQ(datePack(1912	,6	,30	),date(1912	,6	,29	));
EXPECT_EQ(datePack(1912	,7	,1	),date(1912	,6	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,6	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,11	,0	));
EXPECT_EQ(datePack(1912	,11	,2	),date(1912	,11	,1	));
EXPECT_EQ(datePack(1912	,11	,3	),date(1912	,11	,2	));
EXPECT_EQ(datePack(1912	,11	,16	),date(1912	,11	,15	));
EXPECT_EQ(datePack(1912	,11	,30	),date(1912	,11	,29	));
EXPECT_EQ(datePack(1912	,12	,1	),date(1912	,11	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,11	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,12	,0	));
EXPECT_EQ(datePack(1912	,12	,2	),date(1912	,12	,1	));
EXPECT_EQ(datePack(1912	,12	,3	),date(1912	,12	,2	));
EXPECT_EQ(datePack(1912	,12	,17	),date(1912	,12	,16	));
EXPECT_EQ(datePack(1912	,12	,31	),date(1912	,12	,30	));
EXPECT_EQ(datePack(1913	,1	,1	),date(1912	,12	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,12	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,13	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,13	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,13	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,13	,16	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,13	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,13	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(1912	,13	,32	));

EXPECT_EQ(datePack(0	,0	,0	),date(2011	,0	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,0	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,0	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,0	,16	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,0	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,0	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,0	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,1	,0	));
EXPECT_EQ(datePack(2011	,1	,2	),date(2011	,1	,1	));
EXPECT_EQ(datePack(2011	,1	,3	),date(2011	,1	,2	));
EXPECT_EQ(datePack(2011	,1	,17	),date(2011	,1	,16	));
EXPECT_EQ(datePack(2011	,1	,31	),date(2011	,1	,30	));
EXPECT_EQ(datePack(2011	,2	,1	),date(2011	,1	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,1	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,2	,0	));
EXPECT_EQ(datePack(2011	,2	,2	),date(2011	,2	,1	));
EXPECT_EQ(datePack(2011	,2	,3	),date(2011	,2	,2	));
EXPECT_EQ(datePack(2011	,2	,15	),date(2011	,2	,14	));
EXPECT_EQ(datePack(2011	,2	,28	),date(2011	,2	,27	));
EXPECT_EQ(datePack(2011	,3	,1	),date(2011	,2	,28	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,2	,29	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,2	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,6	,0	));
EXPECT_EQ(datePack(2011	,6	,2	),date(2011	,6	,1	));
EXPECT_EQ(datePack(2011	,6	,3	),date(2011	,6	,2	));
EXPECT_EQ(datePack(2011	,6	,16	),date(2011	,6	,15	));
EXPECT_EQ(datePack(2011	,6	,30	),date(2011	,6	,29	));
EXPECT_EQ(datePack(2011	,7	,1	),date(2011	,6	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,6	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,11	,0	));
EXPECT_EQ(datePack(2011	,11	,2	),date(2011	,11	,1	));
EXPECT_EQ(datePack(2011	,11	,3	),date(2011	,11	,2	));
EXPECT_EQ(datePack(2011	,11	,16	),date(2011	,11	,15	));
EXPECT_EQ(datePack(2011	,11	,30	),date(2011	,11	,29	));
EXPECT_EQ(datePack(2011	,12	,1	),date(2011	,11	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,11	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,12	,0	));
EXPECT_EQ(datePack(2011	,12	,2	),date(2011	,12	,1	));
EXPECT_EQ(datePack(2011	,12	,3	),date(2011	,12	,2	));
EXPECT_EQ(datePack(2011	,12	,17	),date(2011	,12	,16	));
EXPECT_EQ(datePack(2011	,12	,31	),date(2011	,12	,30	));
EXPECT_EQ(datePack(2012	,1	,1	),date(2011	,12	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,12	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,13	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,13	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,13	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,13	,16	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,13	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,13	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2011	,13	,32	));

EXPECT_EQ(datePack(0	,0	,0	),date(2012	,0	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,0	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,0	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,0	,16	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,0	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,0	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,0	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,1	,0	));
EXPECT_EQ(datePack(2012	,1	,2	),date(2012	,1	,1	));
EXPECT_EQ(datePack(2012	,1	,3	),date(2012	,1	,2	));
EXPECT_EQ(datePack(2012	,1	,17	),date(2012	,1	,16	));
EXPECT_EQ(datePack(2012	,1	,31	),date(2012	,1	,30	));
EXPECT_EQ(datePack(2012	,2	,1	),date(2012	,1	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,1	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,2	,0	));
EXPECT_EQ(datePack(2012	,2	,2	),date(2012	,2	,1	));
EXPECT_EQ(datePack(2012	,2	,3	),date(2012	,2	,2	));
EXPECT_EQ(datePack(2012	,2	,15	),date(2012	,2	,14	));
EXPECT_EQ(datePack(2012	,2	,28	),date(2012	,2	,27	));
EXPECT_EQ(datePack(2012	,2	,29	),date(2012	,2	,28	));
EXPECT_EQ(datePack(2012	,3	,1	),date(2012	,2	,29	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,2	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,6	,0	));
EXPECT_EQ(datePack(2012	,6	,2	),date(2012	,6	,1	));
EXPECT_EQ(datePack(2012	,6	,3	),date(2012	,6	,2	));
EXPECT_EQ(datePack(2012	,6	,16	),date(2012	,6	,15	));
EXPECT_EQ(datePack(2012	,6	,30	),date(2012	,6	,29	));
EXPECT_EQ(datePack(2012	,7	,1	),date(2012	,6	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,6	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,11	,0	));
EXPECT_EQ(datePack(2012	,11	,2	),date(2012	,11	,1	));
EXPECT_EQ(datePack(2012	,11	,3	),date(2012	,11	,2	));
EXPECT_EQ(datePack(2012	,11	,16	),date(2012	,11	,15	));
EXPECT_EQ(datePack(2012	,11	,30	),date(2012	,11	,29	));
EXPECT_EQ(datePack(2012	,12	,1	),date(2012	,11	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,11	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,12	,0	));
EXPECT_EQ(datePack(2012	,12	,2	),date(2012	,12	,1	));
EXPECT_EQ(datePack(2012	,12	,3	),date(2012	,12	,2	));
EXPECT_EQ(datePack(2012	,12	,17	),date(2012	,12	,16	));
EXPECT_EQ(datePack(2012	,12	,31	),date(2012	,12	,30	));
EXPECT_EQ(datePack(2013	,1	,1	),date(2012	,12	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,12	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,13	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,13	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,13	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,13	,16	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,13	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,13	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2012	,13	,32	));

EXPECT_EQ(datePack(0	,0	,0	),date(2013	,0	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,0	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,0	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,0	,16	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,0	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,0	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,0	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,1	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,1	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,1	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,1	,16	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,1	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,1	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,1	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,2	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,2	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,2	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,2	,14	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,2	,27	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,2	,28	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,2	,29	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,2	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,6	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,6	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,6	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,6	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,6	,29	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,6	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,6	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,11	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,11	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,11	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,11	,15	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,11	,29	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,11	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,11	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,12	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,12	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,12	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,12	,16	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,12	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,12	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,12	,32	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,13	,0	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,13	,1	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,13	,2	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,13	,16	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,13	,30	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,13	,31	));
EXPECT_EQ(datePack(0	,0	,0	),date(2013	,13	,32	));

}

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
