int main()
{
    int choice = 0;
    do
    {
        int number = 0;
        printf("This programs checks and tells whether the entered number is Even or Odd\n\n");
        printf("Please enter a positive number\n");
        scanf("%d", &number);
        if (number < 0)
        {
            printf("Please enter a number greater or equal to Zero.\n");
        }
        else
        {
            if (number % 2 == 0)
            {
                printf("The entered number %d is Even Number\n", number);
            }
            else
            {
                printf("The entered number %d is Odd Number\n", number);
            }
        }

        printf("Do you want to continue?\n");
        printf("Press 1 for Yes and 2 for No\n");
        scanf("%d", &choice);
    } while (choice == 1);
}
