import { traversal, TreeNode } from './Tree';

export default function inorderTraversal(root: TreeNode | null): number[] {
  const res: number[] = [];

  traversal(root, node => {
    res.push(node);
  });

  return res;
}
