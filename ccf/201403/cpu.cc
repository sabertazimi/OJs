/*!
 * \file cpu.cc
 * \brief No.5
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <vector>

using namespace std;

// dynamic programming
// f(0,x,y,z)=max{x,y,z},
// f(i,x,y,z)=min{f(i-1,x+a[i],y,z), f(i-1,x,y+a[i],z), f(i-1,x+c[i],y,z+c[i]),  f(i-1,x,y+c[i],z+c[i]), f(i-1,x+d[i],y+d[i],z+d[i])}.

class Task {
 public:
	int pid;
	int sc, mc, scg, mcg;
	 Task(void) {
		pid = sc = mc = scg = mcg = 0;
	} Task(int pid, int sc, int mc, int scg, int mcg) {
		this->pid = pid;
		this->sc = sc;
		this->mc = mc;
		this->scg = scg;
		this->mcg = mcg;
	}
};

int main(void)
{
	int n;
	cin >> n;

	int sc, mc, scg, mcg;
	vector < Task * >tasks(n);
	for (int i = 0; i < n; i++) {
		cin >> sc >> mc >> scg >> mcg;
		tasks[i] = new Task(i, sc, mc, scg, mcg);
	}
}
