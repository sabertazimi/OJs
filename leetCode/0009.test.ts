import solution from './0009';

/**
 * @author sabertazimi
 * @license MIT
 * @level medium
 * @description palindrome-number
 * Given an integer x, return true if x is palindrome integer.
 * An integer is a palindrome when it reads the same backward as forward.
 * For example, 121 is palindrome while 123 is not.
 */
describe('LeetCode [0009]', () => {
  test('should AC', () => {
    expect(solution(121)).toBe(true);
    expect(solution(-121)).toBe(false);
    expect(solution(10)).toBe(false);
    expect(solution(-101)).toBe(false);
  });
});
