import solution from './0190';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description reverse-bits
 * Reverse bits of a given 32 bits unsigned integer.
 */
describe('LeetCode [0190]', () => {
  test('should AC', () => {
    expect(
      solution(Number.parseInt('00000010100101000001111010011100', 2))
    ).toStrictEqual(964176192);
    expect(
      solution(Number.parseInt('11111111111111111111111111111101', 2))
    ).toStrictEqual(3221225471);
  });
});
