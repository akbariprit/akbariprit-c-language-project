#include<stdio.h>
int main()
{
   
int add(int a, int b)      { return a + b; }
int sub(int a, int b)      { return a - b; }
int mul(int a, int b)      { return a * b; }
int divi(int a, int b)     { return b != 0 ? a / b : 0; }
int mod(int a, int b)      { return b != 0 ? a % b : 0; }

int main() {
    int a, b, ch, result;
    char cont;

    do {
        printf("\nMenu:\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Mod\nChoice: ");
        scanf("%d", &ch);
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        switch (ch) {
            case 1: result = add(a, b); break;
            case 2: result = sub(a, b); break;
            case 3: result = mul(a, b); break;
            case 4: result = (b != 0) ? divi(a, b) : printf("Error: /0\n"); break;
            case 5: result = (b != 0) ? mod(a, b) : printf("Error: %%0\n"); break;
            default: printf("Invalid!\n"); continue;
        }

        if ((ch >= 1 && ch <= 3) || (ch >= 4 && b != 0))
            printf("Result = %d\n", result);

        printf("Press 'q' to quit, any other key to continue: ");
        scanf(" %c", &cont);
    } while (cont != 'q' && cont != 'Q');

    return 0;
}

}
