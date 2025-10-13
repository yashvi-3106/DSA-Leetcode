class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> st;

        for (string s : op) {
            if (s == "C") {
                st.pop();
            } else if (s == "D") {
                st.push(2 * st.top());
            } else if (s == "+") {
                int top1 = st.top(); st.pop();
                int top2 = st.top();
                st.push(top1);     
                st.push(top1 + top2); 
            } else {
                st.push(stoi(s)); 
            }
        }

        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};


// class Solution {
// public:
//     int calPoints(vector<string>& operations) {
//          vector<int> record;

//         for (string &op : operations) {
//             if (op == "C") {
//                 record.pop_back();
//             } else if (op == "D") {
//                 record.push_back(2 * record.back());
//             } else if (op == "+") {
//                 int n = record.size();
//                 record.push_back(record[n-1] + record[n-2]);
//             } else {
//                 record.push_back(stoi(op));
//             }
//         }

//         int sum = 0;
//         for (int score : record) {
//             sum += score;
//         }
//         return sum;
//     }
// };