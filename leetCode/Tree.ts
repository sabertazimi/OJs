class TreeNode {
  val: number;
  left: TreeNode | null;
  right: TreeNode | null;
  constructor(val: number) {
    this.val = val;
    this.left = null;
    this.right = null;
  }
}

/**
 * @param nums Tree node array (0 present `null` node)
 * @returns Root of binary tree
 */
const arrayToTree = (nums: number[]): TreeNode | null => {
  if (nums.length === 0) return null;
  const root = insertToTree(nums, 0);
  return root;
};

const insertToTree = (nums: number[], index: number): TreeNode | null => {
  let root: TreeNode | null = null;

  if (index < nums.length && nums[index]) {
    root = new TreeNode(nums[index]);
    root.left = insertToTree(nums, 2 * index + 1);
    root.right = insertToTree(nums, 2 * index + 2);
  }

  return root;
};

type Order = 'pre' | 'in' | 'post';

const traversal = (
  root: TreeNode | null,
  visitor: (node: number) => void,
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
