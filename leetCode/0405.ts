export default function toHex(num: number): string {
  if (num === 0) return '0'

  let res = ''

  while (num !== 0) {
    const cur = num & 0xf
    res = cur.toString(16) + res
    num >>>= 4
  }

  return res
}
