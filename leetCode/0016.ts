import { MAX_INT } from './utils';

export default function threeSumClosest(
  nums: number[],
  target: number
): number {
  let solution = 0;
  let distance = MAX_INT;
  nums.sort((a, b) => a - b);

  for (let i = 0; i < nums.length - 2; i++) {
    let j = i + 1;
    let k = nums.length - 1;

    while (j < k) {
      const curSum = nums[i] + nums[j] + nums[k];

      if (curSum < target) {
        const curDistance = target - curSum;
        if (curDistance < distance) {
          distance = curDistance;
          solution = curSum;
        }
        j++;
      } else if (curSum > target) {
        const curDistance = curSum - target;
        if (curDistance < distance) {
          distance = curDistance;
          solution = curSum;
        }
        k--;
      } else {
        return curSum;
      }
    }
  }

  return solution;
}
