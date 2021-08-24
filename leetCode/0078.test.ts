import solution from './0078';

/**
 * @author sabertazimi
 * @license MIT
 * @level medium
 * @description subsets
 * Given an integer array nums of unique elements,
 * return all possible subsets (the power set).
 * The solution set must not contain duplicate subsets.
 * Return the solution in any order.
 */
describe('LeetCode [0078]', () => {
  test('should AC', () => {
    expect(solution([0])).toStrictEqual([[0], []]);
    expect(solution([1, 2, 3])).toStrictEqual([
      [1, 2, 3],
      [1, 2],
      [1, 3],
      [1],
      [2, 3],
      [2],
      [3],
      [],
    ]);
  });
});
