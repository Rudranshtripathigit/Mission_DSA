class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines = 1;
        int width = 0;

        for(int i = 0; i < s.size(); i++) {
            int current = widths[s[i] - 'a'];
          if(width + current > 100) {
                lines++;
                width = current;
            }
            else {
                width += current;
            }
        }
  return {lines, width};
    }
};