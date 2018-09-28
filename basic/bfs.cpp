#include <iostream>
#include <utility>
#include <queue>

const int DIM = 5;

class Algo {
  int maze[DIM][DIM];
  bool visit[DIM][DIM];
  int dim;

public:
  Algo(const int dim, int maze[DIM][DIM]) {
    this->dim = dim;

    for (int i = 0; i < dim; ++i) {
      for (int j = 0; j < dim; ++j) {
        this->maze[i][j] = maze[i][j];
        this->visit[i][j] = false;
      }
    }
  }

  bool run() {
    int directions[4][2] = {
      -1, 0,
      1, 0,
      0, -1,
      0, 1,
    };
    std::queue<std::pair<int, int> > frontier;

    frontier.push(std::make_pair(0, 0));
    this->visit[0][0] = true;

    while (!frontier.empty()) {
      std::pair<int, int> cur = frontier.front();
      frontier.pop();

      for (int i = 0; i < 4; ++i) {
        int rowdir = directions[i][0];
        int coldir = directions[i][1];
        int row = cur.first + rowdir;
        int col = cur.second + coldir;

        if (row + 1 == this->dim && col + 1 == this->dim) {
          return true;
        }

        bool isInMaze = (row >= 0 && row < this->dim
          && col >= 0 && col < this->dim);

        if (isInMaze && this->maze[row][col] == 0 && !this->visit[row][col]) {
          frontier.push(std::make_pair(row, col));
          this->visit[row][col] = true;
        }
      }
    }

    return false;
  }
};

int main(void) {
  int maze[DIM][DIM] = {
    0, 1, 0, 0, 0,
    0, 1, 0, 1, 0,
    0, 1, 1, 1, 0,
    0, 1, 1, 1, 0,
    0, 0, 0, 1, 0,
  };

  Algo algo(DIM, maze);
  bool result = algo.run();
  std::cout << "Maze resolved: "
            << (result ? "true" : "false")
            << std::endl;

  return 0;
}
