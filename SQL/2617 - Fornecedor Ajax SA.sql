SELECT products.name, providers.name FROM products, providers
WHERE providers.id = products.id_providers AND providers.name = 'Ajax SA';
