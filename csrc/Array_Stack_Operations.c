#include<stdio.h>
#include<conio.h>

#define MAX_SIZE 5

int main() {
    int item, choice, i;
    int arr_stack[MAX_SIZE];
    int top = 0;
    int exit = 1;
    clrscr();

    do
    {
        printf("\n\nStack Main Menu\n1.Push \n2.Pop \n3.Display \nOthers to exit");
        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                if (top == MAX_SIZE)
                    printf("\nStack is Full!");
                else
                {
                    printf("\nEnter The Value to be pushed : ");
                    scanf("%d", &item);
                    printf("\nPosition : %d , Pushed Value  : %d ", top, item);
                    arr_stack[top++] = item;
                }
                break;
            case 2:
                if (top == 0)
                    printf("\nStack is Empty!");
                else
                {
                    --top;
                    printf("\nPosition : %d , Popped Value  : %d ", top, arr_stack[top]);
                }
                break;
            case 3:
                printf("\nStack Size : %d ", top);
                for (i = (top - 1); i >= 0; i--)
                    printf("\nPosition : %d , Value  : %d ", i, arr_stack[i]);
                break;
            default:
                exit = 0;
                break;
        }
    } while (exit);

    getch();
    return 0;
}