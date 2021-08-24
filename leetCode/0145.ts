import { traversal, TreeNode } from './Tree';

export default function postorderTraversal(root: TreeNode | null): number[] {
  const res: number[] = [];

  traversal(
    root,
    node => {
      res.push(node);
    },
    'post'
  );

  return res;
}
