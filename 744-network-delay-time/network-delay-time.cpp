class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>> adj(n + 1);

        for (auto &t : times) {
            int u = t[0];
            int v = t[1];
            int w = t[2];

            adj[u].push_back({v, w});
        }

        vector<int> dis(n + 1, INT_MAX);

        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;

        dis[k] = 0;
        pq.push({0, k});

        while (!pq.empty()) {

            auto [d, node] = pq.top();
            pq.pop();

            if (d > dis[node])
                continue;

            for (auto e : adj[node]) {

                int nextV = e.first;
                int nextWt = e.second;

                if (dis[node] + nextWt < dis[nextV]) {

                    dis[nextV] = dis[node] + nextWt;

                    pq.push({dis[nextV], nextV});
                }
            }
        }

        int ans = 0;

        for (int i = 1; i <= n; i++) {

            if (dis[i] == INT_MAX)
                return -1;

            ans = max(ans, dis[i]);
        }

        return ans;
    }
};