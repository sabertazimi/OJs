import solution from './0142';
import { arrayToList } from './List';

/**
 * @author sabertazimi
 * @license MIT
 * @level medium
 * @description linked-list-cycle
 * Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
 * There is a cycle in a linked list if there is some node in the list
 * that can be reached again by continuously following the next pointer.
 * Internally, pos is used to denote the index of the node that tail's next pointer is connected to.
 * Note that pos is not passed as a parameter.
 */
describe('LeetCode [0142]', () => {
  test('should AC', () => {
    expect(solution(arrayToList([]))).toStrictEqual(null);
    expect(solution(arrayToList([1]))).toStrictEqual(null);
    expect(solution(arrayToList([1, 2, 3, 4, 5]))).toStrictEqual(null);

    const list1 = arrayToList([1, 2]);
    if (list1?.next) list1.next.next = list1;
    expect(solution(list1)).toStrictEqual(list1);

    const list2 = arrayToList([3, 2, 0, -4]);
    if (list2?.next?.next?.next) list2.next.next.next.next = list2.next;
    expect(solution(list2)).toStrictEqual(list2?.next);
  });
});