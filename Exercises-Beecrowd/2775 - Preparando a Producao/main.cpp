#include <iostream>
#include <vector>

using namespace std;

struct Pacote
{
    int id;
    long long tempo;
};

long long mergeAndCount(vector<Pacote>& arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<Pacote> L(n1);
    vector<Pacote> R(n2);

    long long soma_tempos_esquerda = 0;

    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
        soma_tempos_esquerda += L[i].tempo;
    }

    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    long long custo_total = 0;

    while (i < n1 && j < n2)
    {
        if (L[i].id <= R[j].id)
        {

            soma_tempos_esquerda -= L[i].tempo;
            arr[k++] = L[i++];
        }
        else
        {

            long long elementos_restantes_esquerda = n1 - i;

            custo_total += (elementos_restantes_esquerda * R[j].tempo) + soma_tempos_esquerda;

            arr[k++] = R[j++];
        }
    }

    while (i < n1)
    {
        arr[k++] = L[i++];
    }

    while (j < n2)
    {
        arr[k++] = R[j++];
    }

    return custo_total;
}

long long mergeSortAndCount(vector<Pacote>& arr, int left, int right)
{
    long long custo = 0;
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        custo += mergeSortAndCount(arr, left, mid);
        custo += mergeSortAndCount(arr, mid + 1, right);
        custo += mergeAndCount(arr, left, mid, right);
    }
    return custo;
}

int main()
{
    int n;

    while (cin >> n)
    {
        vector<Pacote> pacotes(n);

        for (int i = 0; i < n; i++)
        {
            cin >> pacotes[i].id;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> pacotes[i].tempo;
        }

        long long tempo_total = mergeSortAndCount(pacotes, 0, n - 1);

        cout << tempo_total << endl;
    }

    return 0;
}
