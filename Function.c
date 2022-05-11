#include <stdio.h>

float add(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);

int main()
{
    char op, choice ;
    float num1, num2, result=0.0f;

    /* welcome message */
    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----------------------------\n");
    printf("Enter [number 1] [+ - * /] [number 2]\n");

    /* ບ່ອນປ້ອນໂຕເລກຈາກຜູ້ໃຊ້ */
    scanf("%f %c %f", &num1, &op, &num2);

    switch(op)
    {
        case '+': 
            result = add(num1, num2);
            break;

        case '-': 
            result = sub(num1, num2);
            break;

        case '*': 
            result = mult(num1, num2);
            break;

        case '/': 
            result = div(num1, num2);
            break;

        default: 
            printf("Invalid operator");
            main();
    }
        /*Print ຄຳຕອບ_is here*/
    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);
    printf("\n\nDo you want to calculate again? (y or n): ");
	scanf(" %c", &choice);
	if (choice == 'y') {
		main();
	} else if (choice == 'n') {
		printf("exit() ");
	} else {
		printf("ERROR! PLEASE RESTART THIS PROGRAM");
	}
	return 0;
}
float add(float num1, float num2)
{
    return num1 + num2;
}
float sub(float num1, float num2)
{
    return num1 - num2;
}
float mult(float num1, float num2)
{
    return num1 * num2;
}
float div(float num1, float num2)
{
    return num1 / num2;
}
