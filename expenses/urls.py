from django.urls import path
from . import views

urlpatterns = [
    path('', views.index, name='index'),  # Add a view to handle the root URL
]

from django.urls import path
from .views import export_expenses_xls

urlpatterns = [
    # ... other URL patterns ...
    path('export/', export_expenses_xls, name='export_expenses_xls'),
]
