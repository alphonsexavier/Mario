#include <cs50.h>
#include <stdio.h>

//Checks if the height input is between 1 and 8 inclusive
int check_height(int height)
{
    if (height>=1 && height <=8)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

//Function prints space
void print_space(void)
{
    printf(" ");
}

//Function prints star
void print_star()
{
    printf("#");
}


int main(void)
{
    int height;
    int flag;
    do{
    height = get_int("Height :");
    flag = check_height(height);
    }while(flag);

    for(int i=1, limit=height-1;i<=height;i++)
    {
        for (int k=1;k<=limit;k++)
        {
            print_space();
        }

        for(int j=1;j<=i;j++)
        {
            print_star();
        }

        print_space();
        print_space();

        for(int j=1;j<=i;j++)
        {
            print_star();
        }

        --limit;
        printf("\n");
    }
}