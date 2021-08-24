import { traversal, TreeNode } from './Tree';

export default function preorderTraversal(root: TreeNode | null): number[] {
  const res: number[] = [];

  traversal(
    root,
    node => {
      res.push(node);
    },
    'pre'
  );

  return res;
}
