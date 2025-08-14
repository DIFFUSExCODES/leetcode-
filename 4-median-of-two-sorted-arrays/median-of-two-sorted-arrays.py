class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        merged = nums1 + nums2
        merged.sort()
        self = len(merged)
        if (self%2) == 0 :
            self = int(self/2)
            median = (merged[self-1] + merged[self])/2.00
        else :
            self = int((self + 1)/2)
            median = merged[self-1]
        return median
        