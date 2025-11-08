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

Write a query 
identifying the type of each record
in the Triangles table
using its three side lengths.
Output one of the following statements
for each record in the table:
"Equilateral Triangle" - if all three sides are equal
"Isosceles Triangle" - if exactly two sides are equal
"Scalene Triangle" - if no sides are equal
"Invalid Triangle" - if the given side lengths cannot form a triangle

Notes: Sum of any 2 sides must be greater than the 3rd side
*/


SELECT CASE
           WHEN A + B <= C OR A + C <= B OR B + C <= A THEN 'Not A Triangle'
           WHEN A = B AND B = C THEN 'Equilateral'
           WHEN A = B OR B = C OR A = C THEN 'Isosceles'
           ELSE 'Scalene'
       END AS TriangleType
FROM Triangles;

exit;