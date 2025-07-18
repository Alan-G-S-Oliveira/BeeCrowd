SELECT products.name AS "name", categories.name AS "name" FROM products
INNER JOIN categories ON products.id_categories = categories.id
WHERE products.amount > 100 AND (categories.id IN (1, 2, 3, 6, 9))
ORDER BY categories.id;