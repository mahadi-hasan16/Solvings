class Solution {
    public int searchInsert(int[] nums, int target) {
        int r = nums.length;

        if (target > nums[r - 1])
            return r;

        if (target < nums[0])
            return 0;

        int l = 0;
        r = r - 1;

        while (l <= r) {
            int mid = (l + r) / 2;

            if (target > nums[mid]) {
                l = mid + 1;
            } else if (target == nums[mid]) {
                return mid;
            } else {
                r = mid - 1;
            }
        }

        return l;
    }
}
