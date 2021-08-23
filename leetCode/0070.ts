export default function climbStairs(n: number): number {
  let p = 0;
  let q = 0;
  let dp = 1;
  for (let i = 1; i <= n; ++i) {
    // dp[i] = dp[i - 2] + dp[i - 1]
    p = q;
    q = dp;
    dp = p + q;
  }
  return dp;
}
