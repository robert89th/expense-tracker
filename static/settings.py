# settings.py

# ...

STATIC_URL = '/static/'
STATICFILES_DIRS = [BASE_DIR / "static"]

TEMPLATES = [
    {
        'BACKEND': 'django.template.backends.django.DjangoTemplates',
        'DIRS': [BASE_DIR / 'templates'],
        # ...
    },
]
