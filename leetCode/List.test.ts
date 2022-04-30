import consola from 'consola';
import { ListNode, arrayToList, printList } from './List';

describe('List', () => {
  test('should construct `null` list from empty array', () => {
    const list = arrayToList([]);
    expect(list).toStrictEqual(null);
  });

  test('should construct from [number array] correctly', () => {
    const list = arrayToList([1, 2, 3, 4, 5]);
    expect(list).toBeTruthy();
    expect(list?.val).toStrictEqual(1);
    expect(list?.next?.val).toStrictEqual(2);
    expect(list?.next?.next?.val).toStrictEqual(3);
    expect(list?.next?.next?.next?.val).toStrictEqual(4);
    expect(list?.next?.next?.next?.next?.val).toStrictEqual(5);
  });

  test('should construct from [string array] correctly', () => {
    const list = arrayToList(['1', '2', '3', '4', '5']);
    expect(list).toBeTruthy();
    expect(list?.val).toStrictEqual('1');
    expect(list?.next?.val).toStrictEqual('2');
    expect(list?.next?.next?.val).toStrictEqual('3');
    expect(list?.next?.next?.next?.val).toStrictEqual('4');
    expect(list?.next?.next?.next?.next?.val).toStrictEqual('5');
  });

  test('should construct from [class array] correctly', () => {
    const list = arrayToList([
      new ListNode(1),
      new ListNode(2),
      new ListNode(3),
      new ListNode(4),
      new ListNode(5),
    ]);
    expect(list).toBeTruthy();
    expect(list?.val).toStrictEqual(new ListNode(1));
    expect(list?.next?.val).toStrictEqual(new ListNode(2));
    expect(list?.next?.next?.val).toStrictEqual(new ListNode(3));
    expect(list?.next?.next?.next?.val).toStrictEqual(new ListNode(4));
    expect(list?.next?.next?.next?.next?.val).toStrictEqual(new ListNode(5));
  });

  test('should print correctly', () => {
    const mockConsolaInfo = vi
      .spyOn(consola, 'info')
      .mockImplementation(() => {});
    printList(arrayToList([1, 2, 3, 4, 5]));
    expect(mockConsolaInfo).toHaveBeenCalledTimes(1);
    mockConsolaInfo.mockRestore();
  });
});
