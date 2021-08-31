import solution from './0453';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description minimum-moves-to-equal-array-elements
 * @see {@link https://leetcode-cn.com/problems/minimum-moves-to-equal-array-elements/}
 */
describe('LeetCode [0453]', () => {
  test('should AC', () => {
    expect(solution([1, 1, 1])).toStrictEqual(0);
    expect(solution([1, 2, 3])).toStrictEqual(3);
  });
});
