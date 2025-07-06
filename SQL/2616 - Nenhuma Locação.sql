SELECT customers.id AS "id", customers.name AS "name" FROM customers
WHERE customers.id NOT IN (SELECT id_customers FROM locations);