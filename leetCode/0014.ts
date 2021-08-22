export default function longestCommonPrefix(stringArray: string[]): string {
  const firstString = stringArray[0];

  for (let k = 0; stringArray.length > 0; k++) {
    for (let i = 0; i < stringArray.length; i++) {
      const str = stringArray[i];
      if (str.length <= k || firstString[k] !== str[k]) {
        return str.slice(0, k);
      }
    }
  }

  return '';
}
