import solution from './0125';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description valid-palindrome
 * Given a string s, determine if it is a palindrome,
 * considering only alphanumeric characters and ignoring cases.
 */
describe('LeetCode [0125]', () => {
  test('should AC', () => {
    expect(solution('0P')).toStrictEqual(false);
    expect(solution('race a car')).toStrictEqual(false);
    expect(solution('A man, a plan, a canal: Panama')).toStrictEqual(true);
  });
});
