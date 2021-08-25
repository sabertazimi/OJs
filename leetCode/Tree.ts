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
  const root = insertToTree(nodes, 0);
  return root;
};

const insertToTree = <T>(
  nodes: (T | null)[],
  index: number
): TreeNode<T> | null => {
  let root: TreeNode<T> | null = null;
  const node = nodes[index];

  if (node !== null && index < nodes.length) {
    root = new TreeNode(node);
    root.left = insertToTree(nodes, 2 * index + 1);
    root.right = insertToTree(nodes, 2 * index + 2);
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
