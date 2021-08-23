import solution from './0028';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description implement strStr
 * Return the index of the first occurrence of needle in haystack,
 * or -1 if needle is not part of haystack.
 */
describe('LeetCode [0028]', () => {
  test('should AC', () => {
    expect(solution('', '')).toStrictEqual(0);
    expect(solution('hello', 'll')).toStrictEqual(2);
    expect(solution('aaaaa', 'bba')).toStrictEqual(-1);
  });
});
