SET FEEDBACK OFF;
SET ECHO OFF;
SET HEADING OFF;
SET WRAP OFF;
SET LINESIZE 10000;
SET TAB OFF;

-- Query the total population of all cities 
-- in CITY where District is California.

SELECT SUM(POPULATION)
FROM CITY
WHERE DISTRICT = 'California'; 

-- Query the average population of all cities 
-- in CITY  where District is California.

SELECT avg(POPULATION) 
from city
where District = 'California';

-- Query the average population for all cities 
-- in CITY, rounded down to the nearest integer.

SELECT floor(avg(population))
from city;

-- Query the average population for all cities 
-- in CITY, rounded up to the nearest integer.

SELECT ceil(avg(population))
from city;


-- Query the sum of the populations 
-- for all Japanese cities in CITY. 
-- The COUNTRYCODE for Japan is JPN.


SELECT sum(population)
FROM CITY
where COUNTRYCODE = 'JPN';


-- Query the difference (result of subtract) between 
-- the maximum and minimum populations
-- in CITY

SELECT max(population) - min(population)
from CITY;

exit;