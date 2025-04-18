// O. Replace MinMax

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    int minIndex = min_element(A.begin(), A.end()) - A.begin();
    int maxIndex = max_element(A.begin(), A.end()) - A.begin();

    swap(A[minIndex], A[maxIndex]);

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}