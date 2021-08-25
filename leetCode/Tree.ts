class TreeNode<T> {
  val: T;
  left: TreeNode<T> | null;
  right: TreeNode<T> | null;

  constructor(val: T) {
    this.val = val;
    this.left = null;
    this.right = null;
  }
}

/**
 * @param nodes Tree node array (include the `null` node)
 * @returns Root of binary tree
 */
const arrayToTree = <T>(nodes: (T | null)[]): TreeNode<T> | null => {
  if (nodes.length === 0) return null;

  let nextItem = 0;
  const root = new TreeNode(nodes[nextItem++] as T);
  const queue = [root];

  while (queue.length > 0) {
    const current = queue.shift() as TreeNode<T>;

    if (nextItem < nodes.length) {
      const item = nodes[nextItem++];

      if (item !== null) {
        const node = new TreeNode(item);
        current.left = node;
        queue.push(node);
      }
    }

    if (nextItem < nodes.length) {
      const item = nodes[nextItem++];

      if (item !== null) {
        const node = new TreeNode(item);
        current.right = node;
        queue.push(node);
      }
    }
  }

  return root;
};

type Order = 'pre' | 'in' | 'post';

const traversal = <T>(
  root: TreeNode<T> | null,
  visitor: (node: T) => void,
  order: Order = 'in'
): void => {
  if (root === null) {
    return;
  }

  switch (order) {
    case 'pre':
      visitor(root.val);
      traversal(root.left, visitor, order);
      traversal(root.right, visitor, order);
      break;
    case 'in':
      traversal(root.left, visitor, order);
      visitor(root.val);
      traversal(root.right, visitor, order);
      break;
    case 'post':
      traversal(root.left, visitor, order);
      traversal(root.right, visitor, order);
      visitor(root.val);
      break;
  }
};

export { TreeNode, arrayToTree, traversal };
