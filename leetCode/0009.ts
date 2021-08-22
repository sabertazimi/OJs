export default function isPalindrome(x: number): boolean {
  return isPalindromeString(x.toString());
}

const isPalindromeString = (s: string): boolean => {
  if (s.length <= 1) {
    return true;
  }

  return (
    s[0] === s[s.length - 1] && isPalindromeString(s.slice(1, s.length - 1))
  );
};
