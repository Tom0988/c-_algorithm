#include <cstdio>

int main()
{
    int coin[4] = {1, 5, 10, 50};
    int m, n;
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        scanf("%d", &n);
        int num = 0;
        for(int j = 3; j >= 0 && n > 0; j--){
            num += n/coin[j];
            n %= coin[j];
        }
        printf("%d\n", num);
    }

    return 0;
}
