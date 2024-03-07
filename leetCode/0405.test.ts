import solution from './0405'

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description convert-a-number-to-hexadecimal
 * @see {@link https://leetcode-cn.com/problems/convert-a-number-to-hexadecimal/}
 * Given an integer num, return a string representing its hexadecimal representation.
 * For negative integers, two’s complement method is used.
 * All the letters in the answer string should be lowercase characters,
 * and there should not be any leading zeros in the answer except for the zero itself.
 */
describe('LeetCode [0405]', () => {
  test('should AC', () => {
    expect(solution(0)).toStrictEqual('0')
    expect(solution(26)).toStrictEqual('1a')
    expect(solution(-1)).toStrictEqual('ffffffff')
  })
})
