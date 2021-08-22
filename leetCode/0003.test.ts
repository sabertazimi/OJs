import solution from './0003';

/**
 * @author sabertazimi
 * @license MIT
 * @description longest-substring-without-repeating-characters
 * Given a string `s`,
 * find the length of the longest substring without repeating characters.
 */
describe('LeetCode [0003]', () => {
  test('should AC', () => {
    expect(solution('')).toBe(0);
    expect(solution('abcabcbb')).toBe(3);
    expect(solution('bbbbb')).toBe(1);
    expect(solution('pwwkew')).toBe(3);
  });
});
