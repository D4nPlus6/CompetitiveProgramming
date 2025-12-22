// AAAA 1 P1 - Even-Odd Sort
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int N; cin >> N;
    vector<int> A(N);
    int even = 0;
    int odd = 0;
    for (int i = 0; i < N; i++) {
        int tmp; cin >> tmp;
        A[i] = tmp;
        if (!(tmp & 1)) {even++;}
        else {odd++;}
    }

    

    cout << "Todd" << endl;
    return 0;
}
