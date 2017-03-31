class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int A=nums1.size();
        int B=nums2.size();
        int arr[A+B];
        int mid=(A+B-1)/2;
        int left=0;
        int right=0;
        while(left+right<A+B)
        {
            if(left==A) {
                arr[left+right]=nums2[right];
                right++;
            }
            else if(right==B) {
                arr[left+right]=nums1[left];
                left++;
            }
            else if(nums1[left]<nums2[right]) {
                arr[left+right]=nums1[left];
                left++;
            }
            else {
                arr[left+right]=nums2[right];
                right++;
            }
        }
        if((A+B)%2==0)
            return (double)(arr[mid]+arr[mid+1])/2.0;
        else
            return (double)arr[mid];
    }
};
