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

Query the list of CITY names from STATION that do not start with vowels and do not end with vowels. Your result cannot contain duplicates.

*/

SELECT DISTINCT(CITY)
FROM STATION
WHERE 
    REGEXP_LIKE(CITY, '^[^AEIOU]' ,'i')
    and
    REGEXP_LIKE(CITY, '[^AEIOU]$' ,'i');
exit;