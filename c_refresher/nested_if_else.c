#include<stdio.h>

/**
 * main - function that calculates BMI of somebody
 * Description: the function takes in the 2 inputs of type float, the weight
 * and height then uses the two values to calculate the BMI
 * Return: 0 if program is executed successfully
 */

int main(void)
{
	float weight;
	float height;
	float bmi;

	printf("Enter weight:\n");
	scanf("%f", &weight);
	printf("Enter height:\n");
	scanf("%f", &height);

	if ((weight >= 0) && (height >= 0))
	{
		bmi = weight / ((height / 100) * (height / 100));

		if (bmi < 19)
		{
			printf("Lean\n");
		}
		else if ((bmi >= 19) && (bmi <= 25))
		{
			printf("Normal\n");
		}
		else
		{
			printf("Overweight\n");
		}
	}

	return (0);
}
