# BÀI TIỂU LUẬN PTTKGT 2021
### MSSV: 450110441 - HỌ TÊN: HUỲNH ANH DỰ
## Đề Bài Mô Phỏng Các Thuật Toán

### `Thuật toán Dijkstra`
 
You are given a weighted undirected graph. The vertices are enumerated from 1 to n. Your task is to find the shortest path between the vertex 1 and the vertex n.

- `INPUT`

  - The first line contains two integers n and m (2 ≤ n ≤ 105, 0 ≤ m ≤ 105), where n is the number of vertices and m is the number of edges. Following m lines contain one edge each in form ai, bi and wi (1 ≤ ai, bi ≤ n, 1 ≤ wi ≤ 106), where ai, bi are edge endpoints and wi is the length of the edge.

  - It is possible that the graph has loops and multiple edges between pair of vertices.

- `OUTPUT`

  - Write the only integer -1 in case of no path. Write the shortest path in opposite case. If there are many solutions, print any of them.
  
- **`Tóm tắt đề bài`:**

Cho 1 đồ thị vô hướng có trọng số gồm N đỉnh và M cạnh. Hãy tìm đường đi ngắn nhất từ đỉnh 1 tới đỉnh N.

Nếu không có đường đi, in ra -1.

Nếu có nhiều đường đi cùng trả về 1 giá trị tối ưu, có thể tùy chọn đường đi.

- **`Phương pháp`:**

Đây là một bài tập căn bản cho thuật toán Dijkstra. Có một số điểm cần lưu ý:

Output sẽ trả về -1 nếu sau khi kết thúc duyệt, đường đi ngắn nhất từ 1 tới N là +INF (nhớ rằng đề bài không đảm bảo đồ thị là liên thông).
Vì ta phải in ra đường đi nên ngoài việc xác định giá trị đường đi nhỏ nhất, ta còn phải thực hiện truy vết. Phương pháp truy vết thì vẫn tương tự như khi duyệt DFS/BFS thông thường.

## `Test case` 

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

### `Thuật toán Floyd-Warshall`

You should build a simple, connected, undirected, weighted graph with NN nodes. You are given MM constraints of the type a, b, ca,b,c, representing the fact that the minimum distance between nodes aa and bb should be cc.

- `Standard input`
  - The first line contains two integers NN and MM.

  - Each of the next MM lines contains three integers aa, bb and cc representing a constraint.

- `Standard output`
  - If there is no solution output -1−1.

  - Otherwise, print the number of edges your graph has on the first line.

  - Each of the next line should contain three integers aa, bb, ww, representing an edge (a, b)(a,b) with weight ww.


- **`Tóm tắt đề bài`:**

Cho 2 số N và M, và M bộ 3 số (a, b, c).

Hãy tạo ra một đồ thị đơn vô hướng, liên thông, có trọng số với N đỉnh, sao cho với mỗi bộ số (a, b, c) đề cập ở trên, đường đi ngắn nhất giữa đỉnh a và đỉnh b phải bằng c.

Mọi cạnh trên đồ thị được in ra có trọng số không quá 10^7.

Nếu không có đồ thị thỏa mãn, in ra -1.

- **`Phương pháp`:**

Trường hợp duy nhất để không tìm thấy đồ thị thỏa mãn là các cạnh bị ràng buộc chồng chéo lên nhau – theo cách mà 2 cạnh ràng buộc trung gian có độ dài ngắn hơn một cạnh ràng buộc khác.

Ta nhận thấy, ta hoàn toàn có thể lập một đồ thị đầy đủ, với trọng số tất cả các cạnh bằng 10^7. Với mỗi bộ số (a, b, c), ta gán lại trọng số của cạnh (a, b) bằng c.

Như vậy, ít nhất nếu không tính các đường đi gián tiếp, đồ thị ta lập ra vẫn thỏa mãn ràng buộc của đề bài.

Tới đây, ta có thể sử dụng thuật toán Floyd để tìm đường đi ngắn nhất của tất cả các cặp đỉnh trên đồ thị.

Nếu không có bộ số (a, b, c) nào mà đường đi ngắn nhất từ a tới b khác c, thì đồ thị đó là thỏa mãn, và có thể in ra.

Ngược lại, in ra -1.

## `Test case`
  - `INPUT`: 3 3
1 2 1
2 3 2
1 3 3
 - `OUTPUT`: 2
1 2 1
2 3 2

## `Test case khác`
  - `INPUT`: 3 3
1 2 1
2 3 1
3 1 3
  - `OUTPUT`: -1
  
# TL_Cau2_PTTKGT
## Áp dụng kỹ thuật Đệ quy quay lui để giải bài toán.
- Ký hiệu : 
  + w[i] là trọng lượng của gói hàng thứ i. (i = 1..n).
  + v[i] là giá trị của gói hàng thứ i. (i = 1..n).
- Mô hình bài toán có thể đưa về dạng bài toán quy hoạch tuyến tính nguyên tìm vectơ x = [ x1 , .. , xn ] ( với x1, .. , , xn là số lượng gói hàng 1,..,n được chọn ) như sau.
- Hàm mục tiêu : f = v1*x1 + ... + vn*xn >= max.
- Hệ ràng buộc :
  + w1*x1 + .. + wn*xn ≤ M
  + xi ≥ 0 ( i = 1 .. n )
- Để đánh giá giá trị của đồ vật so với trọng lượng ta dùng hệ số giá trị :
  + vi/wi ( i = 1..n).
- Ưu tiên các đồ vật có hệ số giá trị lớn chọn trước nên ta sắp xếp các gói hàng
từ cao đến thấp theo hệ số giá trị.
  + v1/w1 ≥ v2/w2 ≥ .. ≥ vn/wn.
- Dễ thấy giá trị tối đa của cái túi f(x) ≤ M*v1/w1.
- Vậy x1 có thể nhận các giá trị trong tập S1 = { k1 | k1 ≤ M/w1 }.
- Ứng với mỗi giá trị x1 = k1 <= S ta thiết lập một nhánh phương án có cập trên là:
  + k1*v1 + ( M – k1*w1 )* v2/w2.
- Và trong nhánh này, x2 có thể nhận các giá trị trong tập:
  + S2 = { k2 | k2*w2 ≤ ( M – k1*w1 ) }
- Ứng với mỗi giá trị x2 = k2 <= S2 ta lại thiết lập một nhánh phương án có cận trên
là : 
  + k1*v1 + k2*v2 + ( M – k1*w1 - k2*w2)* v3/w3.
- Tương tự quá trình thiết lập nhánh và cận trên cứ lặp lại cho tới khi nào không
thể chọn thêm một gói hàng nào nữa. (túi không thể chứa thêm gói hàng nào nữa).
- Để tìm phương án tối ưu ta đi theo nhánh có cận lớn nhất.
- Ký hiệu : a : giá trị đồ vật đang đạt được, b: cận trên của nhánh, M’ là trọng
lượng còn lại.

Chương trình (C):
Input : File balo.inp ( Đã xếp theo thứ tự nhỏ dần của v[i]/w[i].

4 8

5 3 2 4

10 5 3 6

Giải thích: File balo.inp tương ứng với:

n M

w[1] w[2] w[3] w[4]

v[1] v[2] v[3] v[4]

Ouput: File balo.out

15

1 1 0 0

Giải thích: File balo.out tương ứng với:

Vmax //Giá trị tối ưu.

x[1] x[2] x[3] x[4] //Số lượng loại đồ vật được chọn.


