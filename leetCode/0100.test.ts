import solution from './0100';
import { arrayToTree } from './Tree';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description same-tree
 */
describe('LeetCode [0100]', () => {
  test('should AC', () => {
    expect(
      solution(arrayToTree([1, 2]), arrayToTree([1, null, 2]))
    ).toStrictEqual(false);
    expect(
      solution(arrayToTree([1, null, 2]), arrayToTree([1, 2]))
    ).toStrictEqual(false);
    expect(
      solution(arrayToTree([1, 2, 1]), arrayToTree([1, 1, 2]))
    ).toStrictEqual(false);
    expect(
      solution(arrayToTree([1, 2, 3]), arrayToTree([1, 2, 3]))
    ).toStrictEqual(true);
  });
});
