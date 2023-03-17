#include <stdio.h>

int main()
{
    int option;
    int num1, num2, result;
    
    do
    {
        printf("\n *** MAIN MENU ***");
        printf("\n 1: ADD");
        printf("\n 2: SUBTRACT");
        printf("\n 3: MULTIPLY");
        printf("\n 4: EXIT");
        
        printf("\n\n Enter your option: ");
        scanf("%d", &option);
        
        if((option >= 1) && (option <= 3))
        {
            printf(" Enter the first number: ");
            scanf("%d", &num1);
            
            printf(" Enter the second number: ");
            scanf("%d", &num2);
        }
        
        switch(option)
        {
            case 1:
                result = num1 + num2;
                break;
            case 2:
                result = num1 - num2;
                break;
            case 3:
                result = num1 * num2;
                break;
            case 4:
                break;
            default:
                printf(" Invalid option!\n");
        }
        
        if((option >= 1) && (option <= 3))
            printf(" The result is: %d\n", result);
        
    } while(option != 4);
    
    return 0;
}
