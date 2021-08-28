import { arrayToTree, traversal, TreeNode, SegmentTree } from './Tree';

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

describe('SegmentTree', () => {
  test('should throw error when constructing from empty array', () => {
    expect(() => new SegmentTree([], jest.fn(), 0)).toThrow(
      Error('Data is empty')
    );
  });

  test('should construct from [number array] correctly', () => {
    const segmentTree = new SegmentTree([1, 2, 3, 4, 5], jest.fn(), 0);
    expect(segmentTree).toBeTruthy();
    expect(segmentTree.get(0)).toStrictEqual(1);
    expect(segmentTree.get(1)).toStrictEqual(2);
    expect(segmentTree.get(2)).toStrictEqual(3);
    expect(segmentTree.get(3)).toStrictEqual(4);
    expect(segmentTree.get(4)).toStrictEqual(5);
  });

  test('should construct from [string array] correctly', () => {
    const segmentTree = new SegmentTree(['1', '2', '3'], jest.fn(), '0');
    expect(segmentTree).toBeTruthy();
    expect(segmentTree.get(0)).toStrictEqual('1');
    expect(segmentTree.get(1)).toStrictEqual('2');
    expect(segmentTree.get(2)).toStrictEqual('3');
  });

  test('should construct from [class array] correctly', () => {
    const segmentTree = new SegmentTree(
      [new TreeNode(1), new TreeNode(2), new TreeNode(3)],
      jest.fn(),
      null
    );
    expect(segmentTree).toBeTruthy();
    expect(segmentTree.get(0)).toStrictEqual(new TreeNode(1));
    expect(segmentTree.get(1)).toStrictEqual(new TreeNode(2));
    expect(segmentTree.get(2)).toStrictEqual(new TreeNode(3));
  });

  test('should update value correctly', () => {
    const segmentTree = new SegmentTree([1, 2, 3, 4, 5], jest.fn(), 0);
    segmentTree.set(0, 5);
    segmentTree.set(1, 4);
    segmentTree.set(2, 3);
    segmentTree.set(3, 2);
    segmentTree.set(4, 1);
    expect(segmentTree.get(0)).toStrictEqual(5);
    expect(segmentTree.get(1)).toStrictEqual(4);
    expect(segmentTree.get(2)).toStrictEqual(3);
    expect(segmentTree.get(3)).toStrictEqual(2);
    expect(segmentTree.get(4)).toStrictEqual(1);
  });

  test('should query range sum correctly', () => {
    const segmentTree = new SegmentTree(
      [1, 2, 3, 4, 5],
      (a: number, b: number) => a + b,
      0
    );
    expect(segmentTree.query(0, 4)).toStrictEqual(15);
    expect(segmentTree.query(0, 3)).toStrictEqual(10);
    expect(segmentTree.query(1, 3)).toStrictEqual(9);
    expect(segmentTree.query(2, 3)).toStrictEqual(7);
    expect(segmentTree.query(2, 2)).toStrictEqual(3);
  });
});
