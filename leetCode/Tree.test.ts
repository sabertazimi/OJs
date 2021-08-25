import { ListNode } from './List';
import { arrayToTree } from './Tree';

describe('Tree', () => {
  test('should construct from [string array] correctly', () => {
    arrayToTree(['1', '2', '3', 'null', 'null', '5', '6']);
  });

  test('should construct from [class array] correctly', () => {
    arrayToTree([
      new ListNode(1),
      new ListNode(2),
      new ListNode(3),
      null,
      null,
      new ListNode(5),
      new ListNode(6),
    ]);
  });
});
