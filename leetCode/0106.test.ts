import solution from './0106';
import { arrayToTree } from './Tree';
import { MIN_INT } from './utils';

/**
 * @author sabertazimi
 * @license MIT
 * @level medium
 * @description construct-binary-tree-from-inorder-and-postorder-traversal
 * Given two integer arrays inorder and postorder
 * where inorder is the inorder traversal of a binary tree
 * and postorder is the postorder traversal of the same tree,
 * construct and return the binary tree.
 */
describe('LeetCode [0106]', () => {
  test('should AC', () => {
    expect(solution([-1], [-1])).toStrictEqual(arrayToTree([-1]));
    expect(solution([9, 3, 15, 20, 7], [9, 15, 7, 20, 3])).toStrictEqual(
      arrayToTree([3, 9, 20, MIN_INT, MIN_INT, 15, 7])
    );
  });
});
