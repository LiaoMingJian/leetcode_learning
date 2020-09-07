class Solution {
public:
	string reverseStr(string s, int k) 
	{
		for (int i = 0; i < s.size(); i += 2 * k)
		{
			int start = i;
			int j = min(int (s.size() - 1), start + k - 1);
			if (i < j)
			{
				reverse(s.begin() + start, s.begin() + j+1);
			}
		}
		return s;
	}
};

