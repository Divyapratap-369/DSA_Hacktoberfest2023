class Solution {
public:
	vector<int> grayCode(int n) {
		// Your code goes here
		vector<int> result;
		int range = pow(2,n);
		for(int i=0;i<range;i++){
			int gray_code = i ^ (i>>1);
			result.push_back(gray_code);
		}
		return result;
	}
};
