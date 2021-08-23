import solution from './0003';

/**
 * @author sabertazimi
 * @license MIT
 * @level medium
 * @description longest-substring-without-repeating-characters
 * Given a string `s`,
 * find the length of the longest substring without repeating characters.
 */
describe('LeetCode [0003]', () => {
  test('should AC', () => {
    expect(solution('')).toStrictEqual(0);
    expect(solution('bbbbb')).toStrictEqual(1);
    expect(solution('abcabcbb')).toStrictEqual(3);
    expect(solution('pwwkew')).toStrictEqual(3);
  });
});
