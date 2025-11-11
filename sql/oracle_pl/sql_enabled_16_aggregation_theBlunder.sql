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

Samantha was tasked 
with calculating the average monthly salaries 
for all employees 
in the employees table,
but did not realize 
her  keyboard's 0 key was broken
until after completing the calculation.
She wants your help finding the difference
between her miscalculation
(using slalaries with any zeros removed), 
and the actual average salary.
Write a query  calculating the amount of error
(i.e.: actual - miscalculated
average monthly salaries),
and round it up 
to the next interger.

Loại Aliasing,              Vị trí,     Dùng AS?,       Ví dụ
Bí danh Cột,                SELECT,     Có (tùy chọn),  SELECT A - B AS Diff
Bí danh Bảng/Derived Table, FROM,       Không,          FROM employees E hoặc FROM (SELECT...) D
*/

SELECT
    AmountOfError
FROM 
    (
        SELECT 
            CEIL(
                -- ABS ensures the "amount of error" is positive regardless of which average is larger
                ABS(
                    -- 1. Actual Average Salary 
                    (SELECT AVG(salary) FROM employees)
                    - 
                    -- 2. Miscalculated Average Salary (zeros removed)
                    (SELECT AVG(TO_NUMBER(
                        -- 
                        NVL(NULLIF(REPLACE(salary, '0', ''), ''), '0')
                    )) FROM employees)
                )
            ) AS AmountOfError
        FROM DUAL -- virtual table in Oracle
    ) DifferenceResultAlias;

exit;

-- done