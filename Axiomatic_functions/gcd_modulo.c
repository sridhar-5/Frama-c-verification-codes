



int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


int main()
{
    int a = 98, b = 56;
    return 0;
}
