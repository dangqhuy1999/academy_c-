SET FEEDBACK OFF;
SET ECHO OFF;
SET HEADING OFF;
SET WRAP OFF;
SET LINESIZE 10000;
SET TAB OFF;

/*
    Query a count of the number 
    of cities in CITY 
    having a Population larger than 100,000.
*/

SELECT count(ID)
from CITY
Where population >100000;

exit;