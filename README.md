1.1 BÀI TOÁN
Mã đi tuần (hay hành trình của quân mã) là bài toán về việc di chuyển một quân mã trên bàn cờ vua (8 x 8). Quân mã được đặt ở một ô trên một bàn cờ trống (có toạ độ bất kì), nó phải di chuyển theo quy tắc của cờ vua để đi qua tất cả các ô của bàn cờ, mỗi ô đi qua đúng một lần.
Nếu một quân mã đi hết 64 vị trí và tại vị trí cuối cùng có thể di chuyển đến vị
trí bắt đầu thông qua một nước cờ thì đó gọi là một hành trình đóng
Có những hành trình, trong đó quân mã sau khi đi hết tất cả 64 ô của bàn cờ và từ ô cuối của hành trình không thể đi về ô xuất phát chỉ bằng một nước đi. Những hành trình như vậy được gọi là hành trình mở. Có rất nhiều lời giải cho bài toán này, chính xác là 26.534.728.821.064 lời giải trong đó quân mã có thể kết thúc tại chính ô mà nó khởi đầu.

1.1.1. Nước đi của quân Mã trên bàn cờ


![image](https://github.com/user-attachments/assets/95275ebe-8e32-4c51-83b0-407f456be040)



Hình 1: Vị trí xuất phát của quân Mã trên bàn cờ

Trong cờ vua, quân Mã là quân có cách đi phức tạp nhất. Xét một quân Mã đang đứng trên bàn cờ và tất cả các hình chữ nhật 2 x 3 nhận ô mà quân Mã đó đang đứng làm đỉnh. Quân Mã đó có thể đi tới các đỉnh khác màu với đỉnh nó đang đứng của bất kì hình chữ nhật 2 x 3 nào, miễn là đỉnh đó không nằm ngay cạnh đỉnh nó đang đứng.
![image](https://github.com/user-attachments/assets/bdb14721-9a10-4104-a7cc-b9ec616e2aa5)
Hình 2: Nước đi của quân Mã
Quân Mã có thể nhảy qua tất cả các quân khác để đến ô nó muốn, miễn là ô đó chưa bị ai chiếm giữ. Nói nôm na là quân Mã không bị cản. Khác với cờ tướng, nơi mà quân Mã có thể bị cản nếu có quân nào đứng ngay trước mặt nó, trong cờ vua, nước đi của quân Mã không có tính chất này.
Khi một quân Mã đứng ở cạnh bàn cờ, số nước đi có thể của nó sẽ bị thu hẹp xuống còn nhiều nhất là một nửa số nước đi ban đầu. Đặc biệt, nếu nó đứng ở một trong bốn góc bàn cờ, nó chỉ đi được tối đa hai nước. Câu nói “Mã ở rìa cũng giống như đồ trang trí” từ đây mà ra.
![image](https://github.com/user-attachments/assets/783ca6ed-a27a-4ebc-a02c-49ce8bab25f8)
Hình 3: Mã ở rìa cũng giống như đồ trang trí

1.1.2. Xuất xứ bài toán
Bài toán quân Mã đi tuần là một dạng của bài toán tổng quát hơn là bài toán tìm đường đi Hamilton trong l‎ý thuyết đồ thị, là một bài toán NP-đầy đủ. Bài toán tìm hành trình đóng của quân mã là một bài toán cụ thể của bài toán tìm chu trình hamiltonian.
Nhiều biến thể của chủ đề này được các nhà toán học nghiên cứu, trong đó có nhà toán học Euler. Các biến đổi có thể theo các hướng:

-	Thay đổi kích thước bàn cờ.
-	Biến thành trò chơi hai người theo tư tưởng này.
- Giảm nhẹ các yêu cầu trên đường đi của quân Mã.
