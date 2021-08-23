export default function searchRange(nums: number[], target: number): number[] {
  const ans = [-1, -1];

  if (nums.length === 0) {
    return ans;
  }

  let l = 0;
  let r = nums.length - 1;
  while (l < r) {
    const mid = (l + r) >> 1;
    if (nums[mid] >= target) r = mid;
    else l = mid + 1;
  }

  if (nums[r] !== target) return ans;
  ans[0] = r;

  l = 0;
  r = nums.length - 1;
  while (l < r) {
    const mid = (l + r + 1) >> 1;
    if (nums[mid] <= target) l = mid;
    else r = mid - 1;
  }

  ans[1] = r;

  return ans;
}
