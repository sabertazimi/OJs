import { ListNode } from './List';

export default function addTwoNumbers(
  l1: ListNode | null,
  l2: ListNode | null
): ListNode | null {
  if (l1 === null && l2 === null) {
    return null;
  }

  if (l1 === null) {
    return l2;
  }

  if (l2 === null) {
    return l1;
  }

  let c1: ListNode | null = l1;
  let c2: ListNode | null = l2;
  const pre = new ListNode(0); // set pre head
  let current = pre;
  let sum = 0; // the sum of two nodes

  while (c1 !== null || c2 !== null) {
    // traverse longer list
    if (c1 !== null) {
      sum += c1.val;
      c1 = c1.next;
    }

    if (c2 !== null) {
      sum += c2.val;
      c2 = c2.next;
    }

    // build next node
    current.next = new ListNode(sum % 10);
    sum = Math.floor(sum / 10); // carry
    current = current.next;
  }

  // note that can have carry at the last digit
  if (sum === 1) current.next = new ListNode(1);

  return pre.next;
}
