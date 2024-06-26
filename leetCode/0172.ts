export default function trailingZeroes(n: number): number {
  let result = 0

  for (let i = 5; Math.floor(n / i) > 0; i *= 5)
    result += Math.floor(n / i)

  return result
}
