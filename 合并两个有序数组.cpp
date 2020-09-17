void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int indexOfM = m - 1;
    int indexOfN = n - 1;
    int cur = m + n - 1;

    // 从后往前处理，b都加到num1上去
    while (indexOfM >= 0 && indexOfN >= 0)
    {
        if (nums1[indexOfM] >= nums2[indexOfN])
        {
            nums1[cur--] = nums1[indexOfM--];
        }
        else if (nums1[indexOfM] < nums2[indexOfN])
        {
            nums1[cur--] = nums2[indexOfN--];
        }   
    }

    // 要是nums2有剩余的，处理一下
    while (indexOfN >= 0)
    {
        nums1[cur--] = nums2[indexOfN--];
    }
}


