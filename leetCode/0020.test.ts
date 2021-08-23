import solution from './0020';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description valid-parentheses
 * Given a string s containing just the characters '(', ')', '{', '}', '[' and ']',
 * determine if the input string is valid.
 * An input string is valid if:
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 */
describe('LeetCode [0020]', () => {
  test('should AC', () => {
    expect(solution('(')).toBe(false);
    expect(solution('()')).toBe(true);
    expect(solution('(]')).toBe(false);
    expect(solution('([)]')).toBe(false);
    expect(solution('{[]}')).toBe(true);
    expect(solution('()[]{}')).toBe(true);
  });
});
