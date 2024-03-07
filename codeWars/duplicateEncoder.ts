export default function duplicateEncode(word: string): string {
  const map: Record<string, number> = {}
  const normalizedString = word.toLowerCase().split('')

  normalizedString.forEach(ch => {
    if (map[ch]) map[ch]++
    else map[ch] = 1
  })

  return normalizedString
    .map(ch => {
      if (map[ch] > 1) return ')'
      else return '('
    })
    .join('')
}
