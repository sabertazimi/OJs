import solution from './0007';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description reverse-integer
 * Given a signed 32-bit integer x, return x with its digits reversed.
 * If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
 */
describe('LeetCode [0007]', () => {
  test('should AC', () => {
    expect(solution(0)).toBe(0);
    expect(solution(120)).toBe(21);
    expect(solution(123)).toBe(321);
    expect(solution(-123)).toBe(-321);
    expect(solution(1534236469)).toBe(0);
  });
});
