data = {'banana': 3, 'apple': 5, 'cherry': 2}
sorted_asc = dict(sorted(data.items()))
print("Ascending by Key:", sorted_asc)
sorted_desc = dict(sorted(data.items(), reverse=True))
print("Descending by Key:", sorted_desc)


