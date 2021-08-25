import solution from './0257';
import { arrayToTree } from './Tree';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description binary-tree-paths
 * Given the root of a binary tree,
 * return all root-to-leaf paths in any order.
 * A leaf is a node with no children.
 */
describe('LeetCode [0257]', () => {
  test('should AC', () => {
    expect(solution(arrayToTree([]))).toStrictEqual([]);
    expect(solution(arrayToTree([1]))).toStrictEqual(['1']);
    expect(solution(arrayToTree([1, 2, 3, null, 5]))).toStrictEqual([
      '1->2->5',
      '1->3',
    ]);
    expect(solution(arrayToTree([1, 2, 3, 5, null, null, 5]))).toStrictEqual([
      '1->2->5',
      '1->3->5',
    ]);
  });
});