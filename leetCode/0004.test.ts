import solution from './0004';

/**
 * @author sabertazimi
 * @license MIT
 * @level hard
 * @description median-of-two-sorted-arrays
 * Given two sorted arrays nums1 and nums2 of size m and n respectively,
 * return the median of the two sorted arrays.
 * The overall run time complexity should be O(log (m+n)).
 */
describe('LeetCode [0004]', () => {
  test('should AC', () => {
    expect(solution([1, 3], [2])).toBe(2);
    expect(solution([1, 2], [3, 4])).toBe(2.5);
    expect(solution([0, 0], [0, 0])).toBe(0);
    expect(solution([], [1])).toBe(1);
    expect(solution([2], [])).toBe(2);
  });
});
