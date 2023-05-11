#include <stdio.h>
#define ll long long
ll ncr(ll n, ll r)
{
    // handle cases where r > n-r
    if (r > n - r)
    {
        r = n - r;
    }

    ll ans = 1;
    for (ll i = 1; i <= r; i += 1)
    {
        ans *= (n - r + i);
        ans /= i;
    }
    return ans;
}

int main()
{
    ll t;
    scanf("%lld", &t);
    while (t--)
    {
        ll r, n, ini, extra, t1, t2, com;
        scanf("%lld %lld", &r, &n);
        ini = n / r;
        extra = n % r;
        t1 = ini + 1;
        t2 = ini;
        com = 1;
        for (ll i = 0; i < extra; i++)
        {
            com = com * ncr(n, t1);
            n = n - t1;
            t1--;
        }
        for (ll i = extra; i < r; i++)
        {
            com = com * ncr(n, t2);
            n = n - t2;
            t2--;
        }
        printf("%lld\n", com);
    }
    return 0;
}
