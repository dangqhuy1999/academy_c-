/*
In my command: `SELECT DISTINCT(city) FROM station WHERE ...`

DISTINCT is a keyword used in a statement SELECT(DQL - Data Query Language).

Purpose: `Remove duplicate values ​​in the query result set.`
*/

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
*/

SELECT distinct(city) from station where MOD(id,2) = 0;

exit;