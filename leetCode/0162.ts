export default function findPeakElement(nums: number[]): number | undefined {
  if (nums.length < 2) return 0;

  let lo = 0;
  let hi = nums.length - 1;
  let mid = 0;

  while (lo <= hi) {
    mid = (lo + hi) >> 1;

    if (
      (mid === 0 || nums[mid] >= nums[mid - 1]) &&
      (mid === nums.length - 1 || nums[mid] >= nums[mid + 1])
    ) {
      return mid;
    } else if (mid > 0 && nums[mid - 1] > nums[mid]) {
      hi = mid - 1;
    } else {
      lo = mid + 1;
    }
  }
}
