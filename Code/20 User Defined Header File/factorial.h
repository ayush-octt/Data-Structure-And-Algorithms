int factorial(int num)
{
    int fac = 1;
    while (num > 0)
    {
        fac *= num;
        num--;
    }

    return fac;
}