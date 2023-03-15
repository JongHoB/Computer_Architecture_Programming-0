#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "util.h"

int is_large(int num1, int num2)
{
	return num1 > num2;
}

int sum_x(int x1, int x2)
{
	int sum = 0;
	/* Fill this function */
	sum = x1 + x2;
	return sum;
}

void sub_y(int y1, int y2, int* sub)
{
	/* Fill this function */
	*sub = y1 - y2;
}

// You have to allocate memory for pointer members of "struct Point_ref"
// Hint: Use malloc()
void Point_val_to_Point_ref(struct Point_val* P1, struct Point_ref* P2)
{
	/* Fill this function */

	int* a = (int*)malloc(sizeof(int));
	int* b = (int*)malloc(sizeof(int));
	*a = P1->x;
	*b = P1->y;
	P2->x = a;
	P2->y = b;


}

void Point_ref_to_Point_val(struct Point_ref* P1, struct Point_val* P2)
{
	/* Fill this function */
	 P2->x= *(P1->x) ;
	 P2->y= *(P1->y)  ;

}

int calc_area1(struct Point_val* P1, struct Point_val* P2)
{
	/* Fill this function */

	int area = 0;
	int width;
	int height;
	if (P1->x > P2->x)
	{
		width = P1->x - P2->x;
	}
	else
	{
		width = P2->x - P1->x;
	}
	if (P1->y >P2->y)
	{
		height = P1->y - P2->y;
	}
	else
	{
		height = P2->y - P1->y;
	}
	area = width * height;
	return area;
}

void calc_area2(struct Point_ref* P1, struct Point_ref* P2, int* area)
{
	/* Fill this function */
	int width;
	int height;
	if (*(P1->x) > *(P2->x))
	{
		width = *(P1->x) - *(P2->x);
	}
	else
	{
		width = *(P2->x) - *(P1->x);
	}
	if (*(P1->y) > *(P2->y))
	{
		height = *(P1->y) - *(P2->y);
	}
	else
	{
		height = *(P2->y) - *(P1->y);
	}
	*area = width * height;
}

char* reverse(char* word)
{
	/* Fill this function */
	int count = strlen(word);
	char temp;
	for (int i = 0; i < count / 2; i++)
	{
		temp = word[i];
		word[i] = word[count - 1 - i];
		word[count - 1 - i] = temp;
	}




	return word;
}
