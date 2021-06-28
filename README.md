# BÀI TIỂU LUẬN PTTKGT 2021
### MSSV: 450110441 - HỌ TÊN: HUỲNH ANH DỰ
## Đề Bài Mô Phỏng Các Thuật Toán

### Thuật toán Dijkstra
 
You are given a weighted undirected graph. The vertices are enumerated from 1 to n. Your task is to find the shortest path between the vertex 1 and the vertex n.

- INPUT

  - The first line contains two integers n and m (2 ≤ n ≤ 105, 0 ≤ m ≤ 105), where n is the number of vertices and m is the number of edges. Following m lines contain one edge each in form ai, bi and wi (1 ≤ ai, bi ≤ n, 1 ≤ wi ≤ 106), where ai, bi are edge endpoints and wi is the length of the edge.

  - It is possible that the graph has loops and multiple edges between pair of vertices.

- OUTPUT

  - Write the only integer -1 in case of no path. Write the shortest path in opposite case. If there are many solutions, print any of them.
  
- **Tóm tắt đề bài:**

Cho 1 đồ thị vô hướng có trọng số gồm N đỉnh và M cạnh. Hãy tìm đường đi ngắn nhất từ đỉnh 1 tới đỉnh N.

Nếu không có đường đi, in ra -1.

Nếu có nhiều đường đi cùng trả về 1 giá trị tối ưu, có thể tùy chọn đường đi.

- **Phương pháp:**

Đây là một bài tập căn bản cho thuật toán Dijkstra. Có một số điểm cần lưu ý:

Output sẽ trả về -1 nếu sau khi kết thúc duyệt, đường đi ngắn nhất từ 1 tới N là +INF (nhớ rằng đề bài không đảm bảo đồ thị là liên thông).
Vì ta phải in ra đường đi nên ngoài việc xác định giá trị đường đi nhỏ nhất, ta còn phải thực hiện truy vết. Phương pháp truy vết thì vẫn tương tự như khi duyệt DFS/BFS thông thường.

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


- **Tóm tắt đề bài:**

Cho 2 số N và M, và M bộ 3 số (a, b, c).

Hãy tạo ra một đồ thị đơn vô hướng, liên thông, có trọng số với N đỉnh, sao cho với mỗi bộ số (a, b, c) đề cập ở trên, đường đi ngắn nhất giữa đỉnh a và đỉnh b phải bằng c.

Mọi cạnh trên đồ thị được in ra có trọng số không quá 10^7.

Nếu không có đồ thị thỏa mãn, in ra -1.

- **Phương pháp:**

Trường hợp duy nhất để không tìm thấy đồ thị thỏa mãn là các cạnh bị ràng buộc chồng chéo lên nhau – theo cách mà 2 cạnh ràng buộc trung gian có độ dài ngắn hơn một cạnh ràng buộc khác.

Ta nhận thấy, ta hoàn toàn có thể lập một đồ thị đầy đủ, với trọng số tất cả các cạnh bằng 10^7. Với mỗi bộ số (a, b, c), ta gán lại trọng số của cạnh (a, b) bằng c.

Như vậy, ít nhất nếu không tính các đường đi gián tiếp, đồ thị ta lập ra vẫn thỏa mãn ràng buộc của đề bài.

Tới đây, ta có thể sử dụng thuật toán Floyd để tìm đường đi ngắn nhất của tất cả các cặp đỉnh trên đồ thị.

Nếu không có bộ số (a, b, c) nào mà đường đi ngắn nhất từ a tới b khác c, thì đồ thị đó là thỏa mãn, và có thể in ra.

Ngược lại, in ra -1.

## Test case
  - `INPUT`: 3 3
1 2 1
2 3 2
1 3 3
 - `OUTPUT`: 2
1 2 1
2 3 2

## Test case khác
  - `INPUT`: 3 3
1 2 1
2 3 1
3 1 3
  - `OUTPUT`: -1
  


