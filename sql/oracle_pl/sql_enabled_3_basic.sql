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

Query  the list of CITY names 
starting with vowels
(a,e,i,o or u) from STATION.
Your result cannot contain duplicates.

Toán tử LIKE được sử dụng 
để so sánh một giá trị 
với một chuỗi ký tự, 
dựa trên mẫu được chỉ định. 

Dấu phần trăm (\("\%"\)) hoạt động như 
một ký tự đại diện, 
khớp với bất kỳ chuỗi ký tự nào 
có độ dài bằng không hoặc lớn hơn.

*/
SELECT DISTINCT(CITY)
FROM STATION
WHERE regexp_like(CITY, '^[aeiou]', 'i')
-- WHERE CITY LIKE 'A%' OR CITY LIKE 'E%' OR CITY LIKE 'I%' OR CITY LIKE 'O%' OR CITY LIKE 'U%';

exit;