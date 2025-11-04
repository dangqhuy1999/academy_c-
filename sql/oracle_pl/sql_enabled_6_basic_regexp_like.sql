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

Query the list of
CITY names from STATION which
have vowels (i.e., a, e, i, o, and u) 
as both their first and last characters.
Your result cannot contain duplicates.

*/
SELECT DISTINCT(CITY) 
FROM STATION
WHERE 
    -- BEGIN BY VOWELS [A, E, I, O, U]
    REGEXP_LIKE(CITY, '^[AEIOU]', 'i')
    AND
    -- END BY VOWELS [A, E, I, O, U]
    REGEXP_LIKE(CITY, '[AEIOU]$', 'i');
exit;