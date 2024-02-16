    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        vector<char> ch = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        int t;
        cin >> t;
        while (t--)
        {
            int n;
            cin >> n;
            string letter, encryp;
            cin >> letter >> encryp;
            for (int i = 0; i < n; i++)
            {
                auto itLetter = find(ch.begin(), ch.end(), letter[i]);
                auto itEncryp = find(ch.begin(), ch.end(), encryp[i]);
                int itLetterIndex = itLetter - ch.begin();
                int itEncryptIndex = itEncryp - ch.begin();
                int count = 0;
                while (itLetterIndex != itEncryptIndex)
                {
                    itLetterIndex = (itLetterIndex + 3) % 26;
                    count++;
                }
                cout << count << " ";
            }
            cout << endl;
        }

        return 0;
    }