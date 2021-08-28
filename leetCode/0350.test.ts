import solution from './0350';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description intersection-of-two-arrays-ii
 * Given two integer arrays nums1 and nums2,
 * return an array of their intersection.
 * Each element in the result must appear as many times as it shows in both arrays
 * and you may return the result in any order.
 */
describe('LeetCode [0350]', () => {
  test('should AC', () => {
    expect(solution([1, 2, 2, 1], [2, 2])).toStrictEqual([2, 2]);
    expect(solution([4, 9, 5], [9, 4, 9, 8, 4])).toStrictEqual([9, 4]);
  });
});
