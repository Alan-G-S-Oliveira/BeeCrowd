SELECT name, ROUND(0.1 * salary, 2) AS "tax" FROM people
WHERE salary > 3000;