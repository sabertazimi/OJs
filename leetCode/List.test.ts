import { arrayToList, printList } from './List';

describe('List', () => {
  test('should print correctly', () => {
    const mockConsoleInfo = jest
      .spyOn(console, 'info')
      .mockImplementation(jest.fn());
    printList(arrayToList([1, 2, 3, 4, 5]));
    expect(mockConsoleInfo).toHaveBeenCalledTimes(1);
    mockConsoleInfo.mockRestore();
  });
});
