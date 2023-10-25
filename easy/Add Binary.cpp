class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int carry=0;
        int i = a.length() - 1;//從左到右 最後要
        int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
      if (i >= 0){
        carry = carry + a[i--] - '0';
      }
      if (j >= 0){
        carry = carry+ b[j--] - '0';
      }
    ans += carry%2 + '0';//優先順序有點不一樣 跟ans = ans + carry%2 + '0'不一樣
     
    carry = carry/2;
    }
    reverse(begin(ans), end(ans));
    return ans;
    }
};
