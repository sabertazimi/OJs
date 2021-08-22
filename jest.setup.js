const { isCI } = require('ci-info');

if (isCI) {
  jest.spyOn(console, 'info').mockImplementation(jest.fn());
}
