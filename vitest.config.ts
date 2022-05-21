import { defineConfig } from 'vitest/config';

export default defineConfig({
  test: {
    globals: true,
    setupFiles: 'tests/setupTests.ts',
    coverage: {
      exclude: ['tests', '**/*.{test,spec}.{js,mjs,cjs,ts,mts,cts,jsx,tsx}'],
      reporter: ['text', 'text-summary', 'lcov'],
    },
  },
});
