class Solution {
public:
    int GetRoot(vector<int>& relationMap, int v)
    {
        int fatherNode = relationMap[v];
        if (fatherNode == v) {
            return fatherNode;
        }

        relationMap[v] = GetRoot(relationMap, fatherNode);

        return relationMap[v];
    }

    int findCircleNum(vector<vector<int>>& M)
    {
        std::ios::sync_with_stdio(false);
        int n = M.size();
        vector<int> relationMap(n, 0);
        for (int i = 0; i < n; ++i) {
            relationMap[i] = i;
        }

        for (int i = 0; i < M.size(); ++i) {
            for (int j = 0; j < M[i].size(); ++j) {
                if (i != j && M[i][j] == 1) {
                    
                    int rootI = GetRoot(relationMap, i);
                    int rootJ = GetRoot(relationMap, j);
                    if (rootI != rootJ) {
                        relationMap[rootJ] = rootI;
                    }
                }
            }
        }


        int numOfGroup = 0;
        for (int i = 0; i < n; ++i) {
            if (relationMap[i] == i) {
                ++numOfGroup;
            }
        }

        return numOfGroup;
    }
};

