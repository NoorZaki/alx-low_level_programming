#include <main.h>
#include <stdio.h>
/**
 * print_remaining_days - takes adate and print
 * how many left in the year , taking leap years into account
 * @month: month number format
 * @day: day of
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
/**
 * print_remaining_days
 * leap year when it can be divided
 * by 100 and 400 or by 4 evenly
 */
if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
{
if (month > 2 && day >= 60)
{
day++;
}
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 266 - day);
}
else
{
if (month == 2 && day == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
return (void);
}

