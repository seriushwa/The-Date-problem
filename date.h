struct datePack
{
	datePack(int year,int month,int day);
	bool operator==(const datePack& right)const;
	int year;
	int month;
	int day;
}
;
datePack date(int year,int month,int day);


