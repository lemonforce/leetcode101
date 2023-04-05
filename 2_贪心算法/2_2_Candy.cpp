/*
 * @Descripttion:分发糖果
 * @version: v1.0
 * @Author: @徐宁泽
 * @Date: 2023-04-05 22:04:37
 * @LastEditors: @徐宁泽
 * @LastEditTime: 2023-04-05 22:31:16
 */
// 未完全搞懂
#include <numeric>
#include <vector>
using namespace std;
class Solution {
   public:
    int candy(vector<int>& ratings) {
        int cnt = ratings.size();
        vector<int> num(cnt, 1);
        for (int i = 1; i < ratings.size(); i++) {
            if (ratings.at(i) > ratings.at(i - 1)) {
                num.at(i) = num.at(i - 1) + 1;
            }
        }
        for (int i = ratings.size() - 1; i > 0; i--) {
            if (ratings.at(i) < ratings.at(i - 1)) {
                num.at(i - 1) = max(num.at(i) + 1, num.at(i - 1));
            }
        }
        return accumulate(num.begin(), num.end(), 0);
    }
};