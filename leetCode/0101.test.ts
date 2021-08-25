import solution from './0101';
import { arrayToTree } from './Tree';
import { MIN_INT } from './utils';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description symmetric-tree
 * Given the root of a binary tree,
 * check whether it is a mirror of itself.
 */
describe('LeetCode [0101]', () => {
  test('should AC', () => {
    expect(solution(arrayToTree([]))).toStrictEqual(true);
    expect(
      solution(arrayToTree([1, 2, 2, MIN_INT, 3, MIN_INT, 3]))
    ).toStrictEqual(false);
    expect(solution(arrayToTree([1, 2, 2, 3, 5, 4, 3]))).toStrictEqual(false);
    expect(solution(arrayToTree([1, 2, 2, 3, 4, 4, 3]))).toStrictEqual(true);
  });
});
