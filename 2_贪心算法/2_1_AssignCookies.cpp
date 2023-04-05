/*
 * @Descripttion: LeetCode 455 分发饼干
 * @version: v1.0
 * @Author: @徐宁泽
 * @Date: 2023-04-05 21:15:05
 * @LastEditors: @徐宁泽
 * @LastEditTime: 2023-04-05 22:03:15
 */
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
   public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int g_index = 0;
        int s_index = 0;
        while (g_index < g.size() && s_index < s.size()) {
            if (g.at(g_index) <= s.at(s_index)) {
                ++g_index;
            }
            ++s_index;
        }
        return g_index;
    }
};
