export default function twoSum(nums: number[], target: number): number[] {
  if (nums.length <= 1) {
    return [];
  }

  const indices = new Map<number, number>();
  const solution: number[] = [];

  nums.forEach((num, index) => {
    indices.set(num, index);
  });

  for (let i = 0; i < nums.length; i++) {
    const rest = target - nums[i];
    const index = indices.get(rest);
    if (index && i < index) {
      solution.push(i);
      solution.push(index);
      return solution;
    }
  }

  return solution;
}
