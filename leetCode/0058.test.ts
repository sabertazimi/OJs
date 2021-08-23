import solution from './0058';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description length-of-last-word
 * Given a string s consisting of some words separated by some number of spaces,
 * return the length of the last word in the string.
 * A word is a maximal substring consisting of non-space characters only.
 */
describe('LeetCode [0058]', () => {
  test('should AC', () => {
    expect(solution('Hello World')).toStrictEqual(5);
    expect(solution('   fly me   to   the moon  ')).toStrictEqual(4);
    expect(solution('sam is still joyBoy')).toStrictEqual(6);
  });
});
