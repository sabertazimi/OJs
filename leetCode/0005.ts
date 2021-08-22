export default function longestPalindrome(s: string): string {
  let left = 0;
  let right = s.length;
  let maxLen = 0;

  for (let len = 1; len <= s.length; len++) {
    for (let i = 0; i < s.length - len + 1; i++) {
      if (isPalindrome(s.slice(i, i + len))) {
        if (maxLen < len) {
          maxLen = len;
          left = i;
          right = i + len;
        }
      }
    }
  }

  return s.slice(left, right);
}

const isPalindrome = (s: string): boolean => {
  if (s.length <= 1) {
    return true;
  }

  return s[0] === s[s.length - 1] && isPalindrome(s.slice(1, s.length - 1));
};
