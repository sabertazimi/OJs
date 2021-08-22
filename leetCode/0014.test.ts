import solution from './0014';

/**
 * @author sabertazimi
 * @license MIT
 * @level easy
 * @description longest common prefix
 * Write a function to find the longest common prefix string amongst an array of strings.
 * If there is no common prefix, return an empty string "".
 */
describe('LeetCode [0014]', () => {
  test('should AC', () => {
    expect(solution([])).toBe('');
    expect(solution(['flower', 'flow', 'flight'])).toBe('fl');
    expect(solution(['dog', 'raceCar', 'car'])).toBe('');
    expect(solution(['dog', 'dogCar', 'dogLongCar'])).toBe('dog');
  });
});
