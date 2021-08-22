import solution from './0001';

/**
 * @author sabertazimi
 * @license MIT
 * @description two-sum
 * Given an array of integers nums and an integer target,
 * return indices of the two numbers such that they add up to target.
 * You may assume that each input would have exactly one solution,
 * and you may not use the same element twice.
 * You can return the answer in any order.
 */
describe('LeetCode [0001]', () => {
  test('should AC', () => {
    expect(solution([], 0)).toStrictEqual([]);
    expect(solution([2, 7], 2)).toStrictEqual([]);
    expect(solution([2, 7, 11, 15], 9)).toStrictEqual([0, 1]);
    expect(solution([3, 2, 4], 6)).toStrictEqual([1, 2]);
    expect(solution([3, 3], 6)).toStrictEqual([0, 1]);
    expect(solution([3, 2, 4, 3], 6)).toStrictEqual([0, 3]);
    expect(solution([3, 2, 5, 3], 6)).toStrictEqual([0, 3]);
    expect(solution([1, 3, 4, 2], 6)).toStrictEqual([2, 3]);
  });
});
