// Да се најде НЗС на низа од броеви

int nzs(int n, int m, int div)
{
    if (n == 1 && m == 1)
    {
        return 1;
    }

    int ostatok_n = n % div;
    int ostatok_m = m % div;

    if (ostatok_n != 0 && ostatok_m != 0)
        return nzs(n, m, div + 1);

    if (ostatok_n != 0)
        return div * nzs(n, m / div, div);

    if (ostatok_m != 0)
        return div * nzs(n / div, m, div);

    return div * nzs(n / div, m / div, div);
}

int main()
{
    int n;
    scanf("%d", &n);

    int niza[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &niza[i]);
    }

    int result = nzs(niza[0], niza[1], 2);
    for (int i = 1; i < n; i++)
    {
        result = nzs(result, niza[i], 2);
    }

    printf("%d", result);

    return 0;
}