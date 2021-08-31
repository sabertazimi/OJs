import solution from './0455';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description assign-cookies
 * @see {@link https://leetcode-cn.com/problems/assign-cookies/}
 */
describe('LeetCode [0455]', () => {
  test('should AC', () => {
    expect(solution([1, 2, 3], [1, 1])).toStrictEqual(1);
    expect(solution([1, 2], [1, 2, 3])).toStrictEqual(2);
  });
});
