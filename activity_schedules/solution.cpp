/*_________________________________________________________________________________
     وَأَن لَّيۡسَ لِلۡإِنسَٰنِ إِلَّا مَا سَعَىٰ (39) وَأَنَّ سَعۡيَهُۥ سَوۡفَ يُرَىٰ (40) ثُمَّ يُجۡزَىٰهُ ٱلۡجَزَآءَ ٱلۡأَوۡفَىٰ (41)
         وَأَنَّ إِلَىٰ رَبِّكَ ٱلۡمُنتَهَىٰ (42) وَأَنَّهُۥ هُوَ أَضۡحَكَ وَأَبۡكَىٰ (43) وَأَنَّهُۥ هُوَ أَمَاتَ وَأَحۡيَا
  _________________________________________________________________________________*/

//       قال رسول الله صلى الله عليه وسلم: "مَن تواضَعَ للهِ رَفَعَهُ".

#include <bits/stdc++.h>

#define endl '\n'
#define int long long
const int inf = 1e18;

using namespace std;

int n;
int ctr = 0;

void func(int d, vector<string> cur) {
    if (d == n) {
        for (int i = 0; i < cur.size(); i++)
            cout << cur[i] << " ";
        cout << endl; ctr++;
        return;
    }

    vector<string> A, B, C;
    A = B = C = cur;
    A.push_back("Swimming");
    B.push_back("Running");
    C.push_back("Football");

    if (cur.empty()) {
        func(d + 1, A);
        func(d + 1, B);
        func(d + 1, C);
    }
    else if (cur.back() == "Swimming") {
        func(d + 1, B);
        func(d + 1, C);
    }
    else if (cur.back() == "Running") {
        func(d + 1, A);
        func(d + 1, C);
    }
    else if (cur.back() == "Football") {
        func(d + 1, A);
        func(d + 1, B);
    }
}

void Solve()
{
    cin >> n;
    ctr = 0;
    func(0, {});
    cout << "COUNT: " << ctr << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("C:\\Sublime\\input.txt", "r", stdin);
    freopen("C:\\Sublime\\output.txt", "w", stdout);
#endif

    int t = 1;
    // cin >> t;
    while (t--)
        Solve();

    cerr << "Done!" << endl;

    return 0;
}
