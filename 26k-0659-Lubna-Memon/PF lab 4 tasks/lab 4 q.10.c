#include <stdio.h>

int main()
{
    int size, num_of_pizza, quantity, crust;
    int hour, option, pizzas;
    char cheese, student;
    float total;

    printf("Enter pizza size (1.Small, 2.Medium, 3.Large): ");
    scanf("%d", &size);

    switch(size)
    {
        case 1:
            printf("Small size selected.\n");
            break;

        case 2:
            printf("Medium size selected.\n");
            break;

        case 3:
            printf("Large size selected.\n");
            break;

        default:
            printf("Invalid size.\n");
            return 0;
    }

    printf("Enter number of pizzas (1-3): ");
    scanf("%d", &num_of_pizza);

    if(num_of_pizza > 1)
    {
        printf("Check our multi-pizza deals.\n");
    }

    if(num_of_pizza < 1 || num_of_pizza > 3)
    {
        printf("Invalid quantity.\n");
        return 0;
    }

    quantity = num_of_pizza;

    switch(quantity)
    {
        case 1:
            total = 8.00;
            break;

        case 2:
            total = 15.00;
            break;

        case 3:
            total = 21.00;
            break;
    }

    printf("Base total = $%.2f\n", total);

    printf("Enter crust type (1.Regular, 2.Thin, 3.Stuffed): ");
    scanf("%d", &crust);

    switch(crust)
    {
        case 1:
            total = total + 0.00;
            break;

        case 2:
            total = total + 1.00;
            break;

        case 3:
            total = total + 2.00;
            break;

        default:
            printf("Invalid crust type.\n");
            return 0;
    }

    printf("Extra cheese (Y/N): ");
    scanf(" %c", &cheese);

    switch(cheese)
    {
        case 'Y':
        case 'y':
            total = total + 1.50;
            break;

        case 'N':
        case 'n':
            break;

        default:
            printf("Invalid choice.\n");
            return 0;
    }

    printf("Enter current hour (0-23): ");
    scanf("%d", &hour);

    if(hour >= 11 && hour <= 14)
    {
        total = total - (total * 0.10);
        printf("Happy Hour discount applied.\n");
    }

    printf("Student ID (Y/N): ");
    scanf(" %c", &student);

    if(student == 'Y' || student == 'y')
    {
        total = total - 2.00;
    }

    if(total < 0)
    {
        total = 0.00;
    }

    pizzas = quantity;

    if(pizzas == 3 && crust == 3)
    {
        printf("You get free garlic bread!\n");
    }

    printf("Fulfillment (1.Pickup, 2.Delivery): ");
    scanf("%d", &option);

    switch(option)
    {
        case 1:
            break;

        case 2:
            total = total + 3.00;
            break;

        default:
            printf("Invalid option.\n");
            return 0;
    }
	printf("============================= \n");
    printf("ORDER SUMMARY \n");
    printf("============================== \n");
    printf("Pizza quantity: %d\n", quantity);

    printf("Pizza size: ");
    switch(size)
    {
        case 1:
            printf("Small\n");
            break;
        case 2:
            printf("Medium\n");
            break;
        case 3:
            printf("Large\n");
            break;
    }

    printf("Crust type: ");
    switch(crust)
    {
        case 1:
            printf("Regular\n");
            break;
        case 2:
            printf("Thin\n");
            break;
        case 3:
            printf("Stuffed\n");
            break;
    }

    if(cheese == 'Y' || cheese == 'y')
        printf("Extra cheese: Yes\n");
    else
        printf("Extra cheese: No\n");

    if(student == 'Y' || student == 'y')
        printf("Student ID: Yes\n");
    else
        printf("Student ID: No\n");

    if(option == 1)
        printf("Fulfillment: Pickup\n");
    else
        printf("Fulfillment: Delivery\n");

    if(pizzas == 3 && crust == 3)
        printf("Bonus: Free garlic bread\n");

    printf("Final total: $%.2f\n", total);

    return 0;
}

