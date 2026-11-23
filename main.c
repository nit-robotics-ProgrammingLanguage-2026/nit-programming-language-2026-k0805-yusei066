#include <stdio.h>

int g_x = 0;
int g_y = 0;
int g_quotient = 0;
int g_remainder = 0;

void calc_divmod(void)
{
    g_quotient = g_x / g_y;
    g_remainder = g_x % g_y;
}

int main(void)
{
    scanf("%d %d", &g_x, &g_y);
    if (g_x <= 0 || g_y <= 0)
    {
        printf("NG");
        return 0;
    }
    calc_divmod();
    printf("%d,%d", g_quotient, g_remainder);
    return 0;
}
