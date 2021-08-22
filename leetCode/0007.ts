export default function reverse(x: number): number {
  const ret =
    x < 0
      ? parseInt(`-${x.toString().slice(1).split('').reverse().join('')}`)
      : parseInt(x.toString().split('').reverse().join(''));

  if (ret > 2 ** 31 - 1 || ret < -(2 ** 31)) {
    return 0;
  }

  return ret;
}
