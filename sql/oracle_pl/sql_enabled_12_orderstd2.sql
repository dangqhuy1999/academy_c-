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
for employees 
in Employee having a salary 
greater than $2000 per month
who have been employees 
for less than 10 months.
Sort your result by ascending employee_id.

*/

SELECT name
from Employee
where salary > 2000 and months < 10
order by employee_id;

exit;