SET NULL "NULL";
SET FEEDBACK OFF;
SET ECHO OFF;
SET HEADING OFF;
SET WRAP OFF;
SET LINESIZE 10000;
SET TAB OFF;
SET PAGES 0;
SET DEFINE OFF;

/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.

Query the two cities in STATION with 
the shortest and longest CITY names, 
as well as their respective lengths 
(i.e.: number of characters in the name). 
If there is more than one smallest or largest city, 
choose the one that 
comes first when 
ordered alphabetically.
The STATION table is described as follows:

where LAT_N is the northern latitude and
LONG_W is the western longitude.

Sample Input

For example, 
CITY has four entries: 
DEF, ABC, PQRS and WXY.

Sample Output

```
ABC 3
PQRS 4
Explanation
```

When ordered alphabetically, 
the CITY names are listed as
ABC, DEF, PQRS, and WXY, with lengths  and 
The longest name is PQRS, 
but there are  options for
shortest named city. 
Choose ABC, 
because it comes first alphabetically.

Note
You can write two separate queries to
get the desired output. 
It need not be a single query.



1. Thứ Tự Viết Lệnh (Syntax Order)

Đây là thứ tự em thường thấy và
viết trong các câu lệnh SQL:
SELECT
FROM
WHERE
GROUP BY
HAVING
ORDER BY
LIMIT / FETCH FIRST 
(hoặc ROWNUM trong Oracle)

2. Thứ Tự Thực Thi Logic 
(Logical Processing Order)
Đây là thứ tự mà Database Engine 
(như Oracle) 
thực sự xử lý câu lệnh của em.
Thứ tự      Mệnh đề     Hành động của Database
1           FROM        Chọn bảng gốc. 
                        Xác định dữ liệu thô 
                        ban đầu cần làm việc.
2           WHERE       Lọc dòng. 
                        Lọc các dòng (records) 
                        dựa trên các điều kiện 
                        (ví dụ: WHERE status = 'Active'). 
                        Lúc này, 
                        các hàm tổng hợp chưa được tính!
3           GROUP BY    Nhóm dữ liệu. 
                        Gom các dòng đã lọc ở 
                        bước 2 lại thành các nhóm 
                        dựa trên các cột được chỉ định.
4           HAVING      Lọc nhóm. 
                        Lọc các nhóm đã được tạo ở
                        bước 3 dựa trên các điều kiện 
                        tổng hợp 
                        (ví dụ: HAVING COUNT(*) > 10).
5           SELECT      Tính toán và Định hình. 
                        Tính toán các hàm tổng hợp 
                        (SUM, COUNT) và
                        các biểu thức, 
                        đặt tên lại cột (dùng AS).
6           ORDER BY    Sắp xếp. 
                        Sắp xếp toàn bộ tập hợp kết quả
                        của bước 5 
                        (thường là bước cuối cùng).


UNION ALL: Gộp hai kết quả (thành phố ngắn nhất và thành phố dài nhất) vào một tập hợp kết quả cuối cùng, kể cả dòng trùng lặp.
UNION ALL: Merge 2 results (shortest city and longest city) into one final result set, including duplicate rows.

UNION: Gộp hai kết quả (thành phố ngắn nhất và thành phố dài nhất) vào một tập hợp kết quả cuối cùng, loại bỏ dòng trùng lặp.
UNION: Merge 2 results (shortest city and longest city) into one final result set, removing duplicate rows.
*/

(
    SELECT CITY, LENGTH_CITY
    FROM (
        SELECT CITY, LENGTH(CITY) AS LENGTH_CITY
        FROM STATION
        ORDER BY LENGTH(CITY) ASC, CITY ASC
    )
    WHERE ROWNUM = 1
)
UNION ALL
(
    SELECT CITY, LENGTH_CITY
    FROM (
        SELECT CITY, LENGTH(CITY) AS LENGTH_CITY
        FROM STATION
        ORDER BY LENGTH(CITY) DESC, CITY ASC
    )
    WHERE ROWNUM = 1
);

exit;