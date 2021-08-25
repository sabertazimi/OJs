import solution from './0145';
import { arrayToTree } from './Tree';
import { MIN_INT } from './utils';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description binary-tree-postorder-traversal
 * Given the root of a binary tree,
 * return the postorder traversal of its nodes' values.
 */
describe('LeetCode [0145]', () => {
  test('should AC', () => {
    expect(solution(arrayToTree([]))).toStrictEqual([]);
    expect(solution(arrayToTree([1]))).toStrictEqual([1]);
    expect(solution(arrayToTree([1, 2]))).toStrictEqual([2, 1]);
    expect(solution(arrayToTree([1, MIN_INT, 2]))).toStrictEqual([2, 1]);
    expect(
      solution(arrayToTree([1, MIN_INT, 2, MIN_INT, MIN_INT, 3]))
    ).toStrictEqual([3, 2, 1]);
    expect(solution(arrayToTree([1, 2, 3, MIN_INT, 5]))).toStrictEqual([
      5, 2, 3, 1,
    ]);
  });
});
