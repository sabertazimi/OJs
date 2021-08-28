import solution from './0344';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description reverse-string
 * Write a function that reverses a string.
 * The input string is given as an array of characters s.
 */
describe('LeetCode [0344]', () => {
  test('should AC', () => {
    expect(solution(['h', 'e', 'l', 'l', 'o'])).toStrictEqual([
      'o',
      'l',
      'l',
      'e',
      'h',
    ]);
    expect(solution(['H', 'a', 'n', 'n', 'a', 'h'])).toStrictEqual([
      'h',
      'a',
      'n',
      'n',
      'a',
      'H',
    ]);
  });
});
