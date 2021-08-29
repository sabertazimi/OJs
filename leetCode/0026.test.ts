import solution from './0026';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description remove-duplicates-from-sorted-array
 * @see {@link https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/}
 * Given an integer array nums sorted in non-decreasing order,
 * remove the duplicates in-place such that each unique element appears only once.
 * The relative order of the elements should be kept the same.
 * Since it is impossible to change the length of the array in some languages,
 * you must instead have the result be placed in the first part of the array nums.
 * More formally, if there are k elements after removing the duplicates,
 * then the first k elements of nums should hold the final result.
 * It does not matter what you leave beyond the first k elements.
 * Return k after placing the final result in the first k slots of nums.
 * Do not allocate extra space for another array.
 * You must do this by modifying the input array in-place with O(1) extra memory.
 */
describe('LeetCode [0026]', () => {
  test('should AC', () => {
    expect(solution([])).toStrictEqual(0);
    expect(solution([1, 1, 2])).toStrictEqual(2);
    expect(solution([0, 0, 1, 1, 1, 2, 2, 3, 3, 4])).toStrictEqual(5);
  });
});
