import { TreeNode } from './Tree';

export default function invertTree(root: TreeNode | null): TreeNode | null {
  if (root === null) {
    return null;
  }

  const leftTree = root.left;
  const rightTree = root.right;
  root.left = invertTree(rightTree);
  root.right = invertTree(leftTree);
  return root;
}
