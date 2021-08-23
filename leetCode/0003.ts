export default function lengthOfLongestSubstring(s: string): number {
  if (s.length === 0) {
    return 0;
  }

  const map = new Map<string, number>();
  let maxLen = 0;

  // 最大子串为 2 个重复字符间字符串长度 + 1
  for (let lo = 0, hi = 0; hi < s.length; hi++) {
    const ch = s.charAt(hi);
    const index = map.get(ch);

    if (index !== undefined && lo <= index) {
      lo = index + 1;
    }

    map.set(ch, hi);
    maxLen = Math.max(maxLen, hi - lo + 1);
  }

  return maxLen;
}
