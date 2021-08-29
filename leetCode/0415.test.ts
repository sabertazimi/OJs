import solution from './0415';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description add-strings
 * Given two non-negative integers,
 * num1 and num2 represented as string,
 * return the sum of num1 and num2 as a string.
 */
describe('LeetCode [0415]', () => {
  test('should AC', () => {
    expect(solution('0', '0')).toStrictEqual('0');
    expect(solution('11', '123')).toStrictEqual('134');
    expect(solution('99', '99')).toStrictEqual('198');
    expect(solution('456', '77')).toStrictEqual('533');
  });
});
