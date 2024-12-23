class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> visited;
        while (n != 1 && visited.find(n) == visited.end()) {
            visited.insert(n);
            n = sumation(n);
        }
        return n==1?true:false;
    }

    int sumation(int n) {
        int sum = 0;
        while (n > 0) {
            int temp = n % 10;
            sum += temp * temp;
            n = n / 10;
        }
        return sum;
    }
};