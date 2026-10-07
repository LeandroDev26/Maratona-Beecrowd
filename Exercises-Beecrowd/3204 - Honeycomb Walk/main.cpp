#include <iostream>

using namespace std;


int dp[15][30][30];

int dirX[] = {1, -1, 0, 0, -1, 1};
int dirY[] = {0, 0, 1, -1, 1, -1};

int main()
{
    for (int p = 0; p <= 14; p++)
    {
        for (int x = 0; x < 30; x++)
        {
            for (int y = 0; y < 30; y++)
            {
                dp[p][x][y] = 0;
            }
        }
    }


    dp[0][15][15] = 1;

    for (int p = 1; p <= 14; p++)
    {

        for (int x = 1; x <= 28; x++)
        {
            for (int y = 1; y <= 28; y++)
            {


                for (int i = 0; i < 6; i++)
                {
                    int vizinhoX = x + dirX[i];
                    int vizinhoY = y + dirY[i];

                    dp[p][x][y] += dp[p - 1][vizinhoX][vizinhoY];
                }

            }
        }
    }

    int casosTeste;
    cin >> casosTeste;

    for (int i = 0; i < casosTeste; i++)
    {
        int n;
        cin >> n;

        cout << dp[n][15][15] << endl;
    }

    return 0;
}
