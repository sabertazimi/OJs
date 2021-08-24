class ListNode<T> {
  val: T;
  next: ListNode<T> | null;
  constructor(val: T, next?: ListNode<T> | null) {
    this.val = val;
    this.next = next === undefined ? null : next;
  }
}

const arrayToList = <T>(nums: T[]): ListNode<T> | null => {
  if (nums.length === 0) {
    return null;
  }

  let list = new ListNode(nums[nums.length - 1]);

  for (let i = nums.length - 2; i >= 0; i--) {
    const current = new ListNode(nums[i], list);
    list = current;
  }

  return list;
};

const printList = <T>(list: ListNode<T> | null): void => {
  let output = '';

  for (let node = list; node !== null; node = node.next) {
    output += `[${node.val}]`;

    if (node.next !== null) {
      output += ' -> ';
    }
  }

  console.info(output);
};

export { ListNode, arrayToList, printList };
