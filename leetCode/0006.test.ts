import solution from './0006';

/**
 * @author sabertazimi
 * @license MIT
 * @level medium
 * @description zigzag-conversion
 * The string "PAYPALISHIRING" is written in a zigzag pattern
 * on a given number of rows like this:
 * P   A   H   N
 * A P L S I I G
 * Y   I   R
 * And then read line by line: "PAHNAPLSIIGYIR"
 * Write the code that will take a string and make this conversion given a number of rows.
 */
describe('LeetCode [0006]', () => {
  test('should AC', () => {
    expect(solution('PAYPALISHIRING', 3)).toStrictEqual('PAHNAPLSIIGYIR');
    expect(solution('PAYPALISHIRING', 4)).toStrictEqual('PINALSIGYAHRPI');
    expect(solution('A', 1)).toStrictEqual('A');
  });
});
