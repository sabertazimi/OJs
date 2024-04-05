import eslintConfig from '@dg-scripts/eslint-config'

export default eslintConfig.append({
  rules: {
    'security/detect-object-injection': 'off',
  },
})
