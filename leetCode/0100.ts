import { TreeNode } from './Tree';

export default function isSameTree<T>(
  p: TreeNode<T> | null,
  q: TreeNode<T> | null
): boolean {
  if (p === null || q === null) return false;
  if (p !== null && q !== null) {
    return (
      p.val === q.val &&
      isSameTree(p.left, q.left) &&
      isSameTree(p.right, q.right)
    );
  }
  return p === null && q === null;
}
