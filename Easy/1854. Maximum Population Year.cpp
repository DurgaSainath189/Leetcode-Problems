class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        std::vector<int> p(101, 0);
        int max = 0, k = 0, result = 0;
        for (int i = 0; i < logs.size(); i++) {
            p[logs[i][0] - 1950]++;
            p[logs[i][1] - 1950]--;
        }
        for (int i = 0; i < p.size(); i++) {
            result += p[i];
            if (result > max) {
                max = result;
                k = i;
            }
        }
        return k + 1950;
    }
};