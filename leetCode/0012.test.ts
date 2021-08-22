import solution from './0012';

/**
 * @author sabertazimi
 * @license MIT
 * @level medium
 * @description integer-to-roman
 * Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
 */
describe('LeetCode [0012]', () => {
  test('should AC', () => {
    expect(solution(1)).toBe('I');
    expect(solution(2)).toBe('II');
    expect(solution(3)).toBe('III');
    expect(solution(4)).toBe('IV');
    expect(solution(5)).toBe('V');
    expect(solution(6)).toBe('VI');
    expect(solution(7)).toBe('VII');
    expect(solution(8)).toBe('VIII');
    expect(solution(9)).toBe('IX');
    expect(solution(10)).toBe('X');
    expect(solution(14)).toBe('XIV');
    expect(solution(38)).toBe('XXXVIII');
    expect(solution(58)).toBe('LVIII');
    expect(solution(444)).toBe('CDXLIV');
    expect(solution(600)).toBe('DC');
    expect(solution(999)).toBe('CMXCIX');
    expect(solution(1994)).toBe('MCMXCIV');
    expect(solution(3999)).toBe('MMMCMXCIX');
  });
});
