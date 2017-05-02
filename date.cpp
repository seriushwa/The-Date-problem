#include<iostream>
#include"gtest/gtest.h"
#include"date.h"
datePack::datePack(int a,int b,int c)
{
	year=a;
	month=b;
	day=c;
}
bool datePack::operator==(const datePack& right)const
{
	if(year != right.year)return false;
	if(month != right.month)return false;
	if(day != right.day)return false;
	return true;
}

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




