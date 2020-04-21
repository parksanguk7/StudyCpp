#include "Time.h"
#include "Date.h"

int main()
{
	Time now;
	now.SetTime(15, 23, 20);
	now.OutTime();
	
	return 0;
}