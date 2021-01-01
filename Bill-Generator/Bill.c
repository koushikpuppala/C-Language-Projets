//This is am programming for multiplication
# include <stdio.h>
int main()
{
    int qty;
    float rate,amount;
    rate=qty=amount=0;

    printf("Enter the Quantity...:");
    scanf("%d",&qty);

    printf("Enter the Rate....:");
    scanf("%f",&rate);

    amount=qty*rate;

    printf("Amount for above deatiles...:%.2f",amount);

    printf("\n");

    return 0;
}
