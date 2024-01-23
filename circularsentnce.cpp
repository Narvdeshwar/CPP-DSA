#include <iostream>
using namespace std;

class Solution {
public:
    bool isCircularSentence(string sentence) {
        if (sentence[0] == sentence[sentence.size() - 1]) {
            int i = 1, j = i + 1;
            while (j < sentence.size() - 1) {
                if (sentence[j] == ' ') {
                    i = j - 1;
                    j = i + 1;  // or j += 1; if you want to increment j
                    if (sentence[i] != sentence[j]) {
                        return false;
                    }
                }
                // cout << i << " " << j << endl;
                j++;
            }
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Solution solution;
    cout << solution.isCircularSentence("ab a");  // This should print false
    return 0;
}
