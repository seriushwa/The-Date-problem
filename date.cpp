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
	if(year<1812 || year>2012)
		return result;
	if((year%4==0)&&(year%400!=0))
		leap = true;
	if(month<1||month>12)
		return result;
	if(month==2)
	{
		if(leap)
		{
			if(day<1 || day>29)
				return result;
			if(day==29)
			{
				day = 1;
				month = 3;
			}
			else
			{
				day += 1;
				month = 2;
			}
		}
		else
		{
			if(day<1 || day>28)
				return result;
			if(day == 28)
			{
				day = 1;
				month = 3;
			}
			else
			{
				day += 1;
				month = 2;
			}
		
		}
	}
	else if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
	{
		if(day<1||day>31)
			return result;
		if(day == 31)
		{
			day = 1;
			month += 1;
		}
		else
		{
			day += 1;
		}
		if(month == 13)
		{
			month = 1;
			year += 1;
		}
	}
	else
	{
		if(day<1||day>30)
			return result;
		if(day == 30)
		{
			day = 1;
			month += 1;
		}
		else
		{
			day += 1;
		}
		
		
		
		
		
	}
	result.day = day;
	result.month = month;
	result.year = year;

	return result;

}




