import solution from './0013';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description roman-to-integer
 * Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
 */
describe('LeetCode [0013]', () => {
  test('should AC', () => {
    expect(solution('III')).toBe(3);
    expect(solution('IV')).toBe(4);
    expect(solution('IX')).toBe(9);
    expect(solution('LVIII')).toBe(58);
    expect(solution('MCMXCIV')).toBe(1994);
  });
});
