import solution from './0554';

/**
 * @author sabertazimi
 * @license MIT
 * @level medium
 * @description brick-wall
 * @see {@link https://leetcode-cn.com/problems/brick-wall/}
 */
describe('LeetCode [0554]', () => {
  test('should AC', () => {
    expect(solution([[1], [1], [1]])).toStrictEqual(3);
    expect(
      solution([
        [1, 2, 2, 1],
        [3, 1, 2],
        [1, 3, 2],
        [2, 4],
        [3, 1, 2],
        [1, 3, 1, 1],
      ])
    ).toStrictEqual(2);
  });
});
