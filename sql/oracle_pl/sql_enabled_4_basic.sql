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

Query  the list of CITY names ending with vowels
(a,e,i, o or u) from STATION.
Your result cannot contain duplicates.

"%u" different with '%u'

"%u" is treated as an identifier 
(e.g., column name).
'%u' is treated as a string literal 
(e.g., a pattern for LIKE).

*/
SELECT DISTINCT(CITY) FROM STATION WHERE CITY LIKE '%a' OR CITY LIKE '%e' OR CITY LIKE '%i' OR CITY LIKE '%o' OR CITY LIKE '%u';
exit;