class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val: number, next?: ListNode | null) {
    this.val = val;
    this.next = next === undefined ? null : next;
  }
}

const arrayToList = (nums: number[]): ListNode | null => {
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

const printList = (list: ListNode | null): void => {
  let output = '';
  for (let node = list; node !== null; node = node.next) {
    output = output.concat(`[${node.val}]`);

    if (node.next !== null) {
      output = output.concat(' -> ');
    }
  }
  console.info(output);
};

export { ListNode, arrayToList, printList };
