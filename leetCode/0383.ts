export default function canConstruct(
  ransomNote: string,
  magazine: string
): boolean {
  for (let i = 0; i < ransomNote.length; i++) {
    if (magazine.indexOf(ransomNote[i]) === -1) return false;
    magazine = magazine.replace(ransomNote[i], '');
  }

  return true;
}
