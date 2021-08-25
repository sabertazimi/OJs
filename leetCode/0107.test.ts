import solution from './0107';
import { arrayToTree } from './Tree';

/**
 * @author sabertazimi
 * @license MIT
 * @level medium
 * @description binary-tree-level-order-traversal-ii
 * Given the root of a binary tree,
 * return the bottom-up level order traversal of its nodes' values.
 * (i.e., from left to right, level by level from leaf to root).
 */
describe('LeetCode [0107]', () => {
  test('should AC', () => {
    expect(solution(arrayToTree([]))).toStrictEqual([]);
    expect(solution(arrayToTree([1]))).toStrictEqual([[1]]);
    expect(solution(arrayToTree([3, 9, 20, 0, 0, 15, 7]))).toStrictEqual([
      [15, 7],
      [9, 20],
      [3],
    ]);
  });
});
