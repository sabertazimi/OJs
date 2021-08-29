import solution from './duplicateEncoder';

/**
 * @author sabertazimi
 * @license MIT
 * @description duplicate-encoder
 * @see {@link https://www.codewars.com/kata/duplicate-encoder/train/typescript/}
 */
describe('CodeWars [Duplicate Encoder]', () => {
  test('should AC', () => {
    expect(solution('din')).toStrictEqual('(((');
    expect(solution('recede')).toStrictEqual('()()()');
    expect(solution('Success')).toStrictEqual(')())())');
    expect(solution('(( @')).toStrictEqual('))((');
  });
});
