class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        // code here
        int pos=-1;
        pos=txt.find(pat);
        return pos;
    }
};