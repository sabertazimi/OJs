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
    expect(solution('42')).toStrictEqual(42);
    expect(solution('-42')).toStrictEqual(-42);
    expect(solution('4193 with words')).toStrictEqual(4193);
    expect(solution('words and 987')).toStrictEqual(0);
    expect(solution('91283472332')).toStrictEqual(2147483647);
    expect(solution('-91283472332')).toStrictEqual(-2147483648);
  });
});