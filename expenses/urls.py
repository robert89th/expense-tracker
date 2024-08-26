from django.urls import path
from . import views

urlpatterns = [
    path('', views.index, name='index'),  # Add a view to handle the root URL
]
