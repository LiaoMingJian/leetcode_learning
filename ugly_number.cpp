
class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> un(n);//保存丑数
        int a, b, c;
        a = b = c = 0;
        un[0] = 1;//第一个丑数
        for (int i = 1; i < n; ++i) {
            int u1 = un[a] * 2, u2 = un[b] * 3, u3 = un[c] * 5;
            un[i] = min(min(u1, u2), u3);//丑数为三者的最小值

			//移动指针
            if (un[i] == u1) ++a;
            if (un[i] == u2) ++b;
            if (un[i] == u3) ++c;   
        }
        return un[n - 1];
    }
};

