# 3. GUL (Global Unique Identifier)

GUL, atau UUID (Universally Unique Identifier), adalah sebuah identifikasi unik yang digunakan untuk membedakan entitas dalam sistem atau basis data. UUID umumnya digunakan untuk memastikan bahwa nilai identifikasi unik tidak akan pernah duplikat di seluruh dunia, membuatnya sangat berguna dalam sistem distribusi yang besar.

### Contoh Kode
```python
import uuid

# Generate a unique identifier
unique_id = uuid.uuid4()
print(f"Generated UUID: {unique_id}")
