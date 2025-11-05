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
that prints a list of employee names 
(i.e: the name attribute) 
from the Employee table 
in alphabetical order. 
 
*/ 
 
SELECT
    Name
FROM
    STUDENTS
WHERE
    Marks > 75
ORDER BY
    SUBSTR(Name, -3), 
    ID ASC;              
 

exit;