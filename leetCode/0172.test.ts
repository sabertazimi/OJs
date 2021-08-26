import solution from './0172';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description factorial-trailing-zeroes
 * Given an integer n, return the number of trailing zeroes in n!.
 */
describe('LeetCode [0172]', () => {
  test('should AC', () => {
    expect(solution(0)).toStrictEqual(0);
    expect(solution(3)).toStrictEqual(0);
    expect(solution(5)).toStrictEqual(1);
  });
});
