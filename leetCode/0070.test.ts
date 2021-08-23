import solution from './0070';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description climbing-stairs
 * Fibonacci sequence
 */
describe('LeetCode [0070]', () => {
  test('should AC', () => {
    expect(solution(1)).toStrictEqual(1);
    expect(solution(2)).toStrictEqual(2);
    expect(solution(3)).toStrictEqual(3);
  });
});
