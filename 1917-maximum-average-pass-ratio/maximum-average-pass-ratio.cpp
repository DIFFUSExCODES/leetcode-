class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        auto gain = [](int pass, int total) {
            return (double)(pass + 1) / (total + 1) - (double)pass / total;
        };

        priority_queue<pair<double, int>> pq;
        int n = classes.size();

        for(int i = 0; i < n; i++){
            pq.push({gain(classes[i][0], classes[i][1]), i});
        }

        while(extraStudents--){
            auto [g, idx] = pq.top(); pq.pop();
            classes[idx][0]++;
            classes[idx][1]++;
            pq.push({gain(classes[idx][0], classes[idx][1]), idx});
        }

        double result = 0;
        for(int i = 0; i < n; i++){
            result += (double)classes[i][0] / classes[i][1];
        }

        return result / n;
    }
};

