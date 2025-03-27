def cakes(recipe, available):
    cakes = float('inf')
    for item, k in recipe.items():
        n = available.get(item, 0)
        cakes = min(cakes, n // k)
        
    return cakes
