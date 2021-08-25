import solution from './duplicateEncoder';

describe('CodeWars [Duplicate Encoder]', () => {
  test('should AC', () => {
    expect(solution('din')).toStrictEqual('(((');
    expect(solution('recede')).toStrictEqual('()()()');
    expect(solution('Success')).toStrictEqual(')())())');
    expect(solution('(( @')).toStrictEqual('))((');
  });
});
