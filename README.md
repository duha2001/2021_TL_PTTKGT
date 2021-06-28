# BÀI TIỂU LUẬN PTTKGT 2021
### MSSV: 450110441 - HỌ TÊN: HUỲNH ANH DỰ
## Đề Bài Mô Phỏng Code Dijkstra - Anh Dự Khoa CNTT 

### Thuật toán Dijkstra
 
You are given a weighted undirected graph. The vertices are enumerated from 1 to n. Your task is to find the shortest path between the vertex 1 and the vertex n.

- INPUT

  - The first line contains two integers n and m (2 ≤ n ≤ 105, 0 ≤ m ≤ 105), where n is the number of vertices and m is the number of edges. Following m lines contain one edge each in form ai, bi and wi (1 ≤ ai, bi ≤ n, 1 ≤ wi ≤ 106), where ai, bi are edge endpoints and wi is the length of the edge.

  - It is possible that the graph has loops and multiple edges between pair of vertices.

- OUTPUT

  - Write the only integer -1 in case of no path. Write the shortest path in opposite case. If there are many solutions, print any of them.

## Test case 

- `INPUT:`
   5 6
   1 2 2
   2 5 5
   2 3 4
   1 4 1
   4 3 3
   3 5 1
- `OUTPUT:`
   1 4 3 5 
------------------------------------------------------------------------------

### Thuật toán Floyd-Warshall

You should build a simple, connected, undirected, weighted graph with NN nodes. You are given MM constraints of the type a, b, ca,b,c, representing the fact that the minimum distance between nodes aa and bb should be cc.

- Standard input
  - The first line contains two integers NN and MM.

  - Each of the next MM lines contains three integers aa, bb and cc representing a constraint.

- Standard output
  - If there is no solution output -1−1.

  - Otherwise, print the number of edges your graph has on the first line.

  - Each of the next line should contain three integers aa, bb, ww, representing an edge (a, b)(a,b) with weight ww.
## Test case
  - `INPUT`: 3 3
1 2 1
2 3 2
1 3 3
 - `OUTPUT`: 2
1 2 1
2 3 2

