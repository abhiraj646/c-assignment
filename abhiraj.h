int palindrome(int a)
{
    int b;
    int p = 0;
    int temp = a;
    while (a > 0)
    {
        b = a % 10;
        p = p * 10 + b;
        a = a / 10;
    }
    if (temp == p)
    {
        return 1;
    }
    return 0;
}

int spynumber(int n)
{
    int sum;
    int m = 1;
    int temp1;
    int n2 = n;
    int temp2;
    while (n > 0)
    {
        temp1 = n % 10;
        sum = sum + temp1;
        n = n / 10;
    }
    while (n2 > 0)
    {
        temp2 = n2 % 10;
        m = m * temp2;
        n2 = n2 / 10;
    }
    if (sum == m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
    int evenodd(int b){
        if(b%2==0){
            return 0;
        }
        return 1;
    
}
