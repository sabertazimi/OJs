import { arrayToTree, traversal, TreeNode } from './Tree';

describe('Tree', () => {
  test('should construct `null` tree from empty array', () => {
    const tree = arrayToTree([]);
    expect(tree).toStrictEqual(null);
  });

  test('should construct from [number array] correctly', () => {
    const tree = arrayToTree([1, 2, 3, null, null, 5, 6]);
    expect(tree).toBeTruthy();
    expect(tree?.val).toStrictEqual(1);
    expect(tree?.left?.val).toStrictEqual(2);
    expect(tree?.right?.val).toStrictEqual(3);
    expect(tree?.left?.left).toStrictEqual(null);
    expect(tree?.left?.right).toStrictEqual(null);
    expect(tree?.right?.left?.val).toStrictEqual(5);
    expect(tree?.right?.right?.val).toStrictEqual(6);
  });

  test('should construct from [string array] correctly', () => {
    const tree = arrayToTree(['1', '2', '3', null, null, '5', '6']);
    expect(tree).toBeTruthy();
    expect(tree?.val).toStrictEqual('1');
    expect(tree?.left?.val).toStrictEqual('2');
    expect(tree?.right?.val).toStrictEqual('3');
    expect(tree?.left?.left).toStrictEqual(null);
    expect(tree?.left?.right).toStrictEqual(null);
    expect(tree?.right?.left?.val).toStrictEqual('5');
    expect(tree?.right?.right?.val).toStrictEqual('6');
  });

  test('should construct from [class array] correctly', () => {
    const tree = arrayToTree([
      new TreeNode(1),
      new TreeNode(2),
      new TreeNode(3),
      null,
      null,
      new TreeNode(5),
      new TreeNode(6),
    ]);
    expect(tree).toBeTruthy();
    expect(tree?.val).toStrictEqual(new TreeNode(1));
    expect(tree?.left?.val).toStrictEqual(new TreeNode(2));
    expect(tree?.right?.val).toStrictEqual(new TreeNode(3));
    expect(tree?.left?.left).toStrictEqual(null);
    expect(tree?.left?.right).toStrictEqual(null);
    expect(tree?.right?.left?.val).toStrictEqual(new TreeNode(5));
    expect(tree?.right?.right?.val).toStrictEqual(new TreeNode(6));
  });

  test('should perform preorder traversal correctly', () => {
    const tree = arrayToTree([1, 2, 3, null, null, 5, 6]);
    const nodes: number[] = [];
    traversal(
      tree,
      node => {
        nodes.push(node);
      },
      'pre'
    );
    expect(tree).toBeTruthy();
    expect(nodes).toStrictEqual([1, 2, 3, 5, 6]);
  });

  test('should perform inorder traversal correctly', () => {
    const tree = arrayToTree([1, 2, 3, null, null, 5, 6]);
    const nodes: number[] = [];
    traversal(tree, node => {
      nodes.push(node);
    });
    expect(tree).toBeTruthy();
    expect(nodes).toStrictEqual([2, 1, 5, 3, 6]);
  });

  test('should perform postorder traversal correctly', () => {
    const tree = arrayToTree([1, 2, 3, null, null, 5, 6]);
    const nodes: number[] = [];
    traversal(
      tree,
      node => {
        nodes.push(node);
      },
      'post'
    );
    expect(tree).toBeTruthy();
    expect(nodes).toStrictEqual([2, 5, 6, 3, 1]);
  });
});
