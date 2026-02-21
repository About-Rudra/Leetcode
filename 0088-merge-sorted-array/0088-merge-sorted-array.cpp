// class Solution {
// public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//     // Copy nums2 into the zeros at the end of nums1
//     for(int i = 0; i < n; i++) {
//         nums1[m + i] = nums2[i];
//     }
//     // Sort the entire array
//     sort(nums1.begin(), nums1.end());
// }
// };

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1;      
        int p2 = n - 1;        
        int pw = m + n - 1;    
        
       
        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[pw] = nums1[p1];
                p1--;
            } else {
                nums1[pw] = nums2[p2];
                p2--;
            }
            pw--;
        }
        
        while (p2 >= 0) {
            nums1[pw] = nums2[p2];
            p2--;
            pw--;
        }
    
    }
};
  