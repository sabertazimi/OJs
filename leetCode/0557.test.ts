import solution from './0557'

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description reverse-words-in-a-string-iii
 * @see {@link https://leetcode-cn.com/problems/reverse-words-in-a-string-iii/}
 */
describe('LeetCode [0557]', () => {
  test('should AC', () => {
    expect(solution('God Ding')).toStrictEqual('doG gniD')
    expect(solution("Let's take LeetCode contest")).toStrictEqual(
      "s'teL ekat edoCteeL tsetnoc"
    )
  })
})
