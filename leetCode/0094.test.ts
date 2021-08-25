import solution from './0094';
import { arrayToTree } from './Tree';
import { MIN_INT } from './utils';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description binary-tree-inorder-traversal
 * Given the root of a binary tree,
 * return the inorder traversal of its nodes' values.
 */
describe('LeetCode [0094]', () => {
  test('should AC', () => {
    expect(solution(arrayToTree([]))).toStrictEqual([]);
    expect(solution(arrayToTree([1]))).toStrictEqual([1]);
    expect(solution(arrayToTree([1, 2]))).toStrictEqual([2, 1]);
    expect(solution(arrayToTree([1, MIN_INT, 2]))).toStrictEqual([1, 2]);
    expect(
      solution(arrayToTree([1, MIN_INT, 2, MIN_INT, MIN_INT, 3]))
    ).toStrictEqual([1, 3, 2]);
    expect(solution(arrayToTree([1, 2, 3, MIN_INT, 5]))).toStrictEqual([
      2, 5, 1, 3,
    ]);
  });
});
