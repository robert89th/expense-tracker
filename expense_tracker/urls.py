from django.urls import path
from ..expenses import views

urlpatterns = [
    path('', views.expense_list, name='expense_list'),
    # Add paths for adding, editing, and deleting expenses
]
from django.contrib.auth import views as auth_views

urlpatterns = [
    path('login/', auth_views.LoginView.as_view(), name='login'),
    path('logout/', auth_views.LogoutView.as_view(), name='logout'),
]
