import solution from './0008';

/**
 * @author sabertazimi
 * @license MIT
 * @level medium
 * @description string-to-integer-atoi
 * Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer.
 */
describe('LeetCode [0008]', () => {
  test('should AC', () => {
    expect(solution('42')).toBe(42);
    expect(solution('-42')).toBe(-42);
    expect(solution('4193 with words')).toBe(4193);
    expect(solution('words and 987')).toBe(0);
    expect(solution('91283472332')).toBe(2147483647);
    expect(solution('-91283472332')).toBe(-2147483648);
  });
});
