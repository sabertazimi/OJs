import solution from './0103';
import { arrayToTree } from './Tree';

/**
 * @author sabertazimi
 * @license MIT
 * @level medium
 * @description binary-tree-zigzag-order-traversal
 * Given the root of a binary tree,
 * return the zigzag level order traversal of its nodes' values.
 * (i.e., from left to right, then right to left for the next level and alternate between).
 */
describe('LeetCode [0103]', () => {
  test('should AC', () => {
    expect(solution(arrayToTree([]))).toStrictEqual([]);
    expect(solution(arrayToTree([1]))).toStrictEqual([[1]]);
    expect(solution(arrayToTree([3, 9, 20, 0, 0, 15, 7]))).toStrictEqual([
      [3],
      [20, 9],
      [15, 7],
    ]);
    expect(solution(arrayToTree([3, 9, 20, 4, 5, 15, 7]))).toStrictEqual([
      [3],
      [20, 9],
      [4, 5, 15, 7],
    ]);
  });
});
