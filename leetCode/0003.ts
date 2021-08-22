export default function lengthOfLongestSubstring(s: string): number {
  if (s.length === 0) {
    return 0;
  }

  const map = new Map<string, number>();
  let left = 0;
  let len = 0;

  // 最大子串为 2个重复字符间字符串长度 + 1
  for (let i = 0; i < s.length; i++) {
    const cur = s.charAt(i);
    const index = map.get(cur);
    if (index !== undefined && left <= index) {
      left = index + 1;
    }
    map.set(cur, i);
    len = Math.max(len, i - left + 1);
  }

  return len;
}
