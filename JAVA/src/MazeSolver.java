import java.util.*;

public class MazeSolver {
    static class Point {
        int x, y;

        public Point(int x, int y) {
            this.x = x;
            this.y = y;
        }
    }

    public static void main(String[] args) {
        int[][] maze = {
                {0, 0, 1, 0, 0},
                {0, 0, 1, 0, 0},
                {0, 0, 0, 0, 1},
                {0, 1, 1, 0, 0},
                {0, 0, 0, 0, 0}
        };

        int startX = 0, startY = 0;
        int endX = 4, endY = 4;

        System.out.println("DFS:");
        dfs(maze, startX, startY, endX, endY);

        System.out.println("BFS:");
        bfs(maze, startX, startY, endX, endY);
    }

    public static void dfs(int[][] maze, int startX, int startY, int endX, int endY) {
        boolean[][] visited = new boolean[maze.length][maze[0].length];
        if (dfsHelper(maze, startX, startY, endX, endY, visited)) {
            System.out.println("Path found!");
        } else {
            System.out.println("No path found!");
        }
    }

    public static boolean dfsHelper(int[][] maze, int x, int y, int endX, int endY, boolean[][] visited) {
        if (x < 0 || x >= maze.length || y < 0 || y >= maze[0].length || maze[x][y] == 1 || visited[x][y]) {
            return false;
        }

        visited[x][y] = true;

        if (x == endX && y == endY) {
            return true;
        }

        int[][] directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (int[] direction : directions) {
            if (dfsHelper(maze, x + direction[0], y + direction[1], endX, endY, visited)) {
                return true;
            }
        }

        return false;
    }

    public static void bfs(int[][] maze, int startX, int startY, int endX, int endY) {
        boolean[][] visited = new boolean[maze.length][maze[0].length];
        Queue<Point> queue = new LinkedList<>();

        queue.add(new Point(startX, startY));
        visited[startX][startY] = true;

        int[][] directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        while (!queue.isEmpty()) {
            Point current = queue.poll();

            if (current.x == endX && current.y == endY) {
                System.out.println("Path found!");
                return;
            }

            for (int[] direction : directions) {
                int newX = current.x + direction[0];
                int newY = current.y + direction[1];

                if (newX >= 0 && newX < maze.length && newY >= 0 && newY < maze[0].length && maze[newX][newY] == 0 && !visited[newX][newY]) {
                    queue.add(new Point(newX, newY));
                    visited[newX][newY] = true;
                }
            }
        }

        System.out.println("No path found!");
    }
}