[33mcommit b8769cce8622ea258ae4705e2bf7e78ff839aba7[m[33m ([m[1;36mHEAD[m[33m -> [m[1;32mmain[m[33m)[m
Author: robert89th <robertdirr@icloud.com>
Date:   Mon Aug 26 13:15:22 2024 -0500

    folder moves

[1mdiff --git a/expense_tracker/__pycache__/__init__.cpython-312.pyc b/expense_tracker/__pycache__/__init__.cpython-312.pyc[m
[1mdeleted file mode 100644[m
[1mindex 4bff875..0000000[m
Binary files a/expense_tracker/__pycache__/__init__.cpython-312.pyc and /dev/null differ
[1mdiff --git a/expense_tracker/__pycache__/settings.cpython-312.pyc b/expense_tracker/__pycache__/settings.cpython-312.pyc[m
[1mdeleted file mode 100644[m
[1mindex b242076..0000000[m
Binary files a/expense_tracker/__pycache__/settings.cpython-312.pyc and /dev/null differ
[1mdiff --git a/expense_tracker/__pycache__/urls.cpython-312.pyc b/expense_tracker/__pycache__/urls.cpython-312.pyc[m
[1mdeleted file mode 100644[m
[1mindex 0b4e570..0000000[m
Binary files a/expense_tracker/__pycache__/urls.cpython-312.pyc and /dev/null differ
[1mdiff --git a/expense_tracker/__pycache__/wsgi.cpython-312.pyc b/expense_tracker/__pycache__/wsgi.cpython-312.pyc[m
[1mdeleted file mode 100644[m
[1mindex 9bc52d6..0000000[m
Binary files a/expense_tracker/__pycache__/wsgi.cpython-312.pyc and /dev/null differ
[1mdiff --git a/expense_tracker/urls.py b/expense_tracker/urls.py[m
[1mindex 0b653b6..5a4c20c 100644[m
[1m--- a/expense_tracker/urls.py[m
[1m+++ b/expense_tracker/urls.py[m
[36m@@ -1,31 +1,9 @@[m
[31m-"""[m
[31m-URL configuration for expense_tracker project.[m
[31m-[m
[31m-The `urlpatterns` list routes URLs to views. For more information please see:[m
[31m-    https://docs.djangoproject.com/en/4.2/topics/http/urls/[m
[31m-Examples:[m
[31m-Function views[m
[31m-    1. Add an import:  from my_app import views[m
[31m-    2. Add a URL to urlpatterns:  path('', views.home, name='home')[m
[31m-Class-based views[m
[31m-    1. Add an import:  from other_app.views import Home[m
[31m-    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')[m
[31m-Including another URLconf[m
[31m-    1. Import the include() function: from django.urls import include, path[m
[31m-    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))[m
[31m-"""[m
[31m-from django.contrib import admin[m
 from django.urls import path[m
[32m+[m[32mfrom ..expenses import views[m
 [m
 urlpatterns = [[m
[31m-    path('admin/', admin.site.urls),[m
[31m-][m
[31m-from django.urls import path, include[m
[31m-[m
[31m-urlpatterns = [[m
[31m-    path('admin/', admin.site.urls),[m
[31m-    path('expenses/', include('expenses.urls')),[m
[31m-    # Add more URLs as needed[m
[32m+[m[32m    path('', views.expense_list, name='expense_list'),[m
[32m+[m[32m    # Add paths for adding, editing, and deleting expenses[m
 ][m
 from django.contrib.auth import views as auth_views[m
 [m
[1mdiff --git a/expenses/__pycache__/__init__.cpython-312.pyc b/expenses/__pycache__/__init__.cpython-312.pyc[m
[1mdeleted file mode 100644[m
[1mindex 4e04525..0000000[m
Binary files a/expenses/__pycache__/__init__.cpython-312.pyc and /dev/null differ
[1mdiff --git a/expenses/__pycache__/models.cpython-312.pyc b/expenses/__pycache__/models.cpython-312.pyc[m
[1mdeleted file mode 100644[m
[1mindex 75668ee..0000000[m
Binary files a/expenses/__pycache__/models.cpython-312.pyc and /dev/null differ
[1mdiff --git a/expenses/__pycache__/urls.cpython-312.pyc b/expenses/__pycache__/urls.cpython-312.pyc[m
[1mdeleted file mode 100644[m
[1mindex cf1c5d9..0000000[m
Binary files a/expenses/__pycache__/urls.cpython-312.pyc and /dev/null differ
[1mdiff --git a/expenses/__pycache__/views.cpython-312.pyc b/expenses/__pycache__/views.cpython-312.pyc[m
[1mdeleted file mode 100644[m
[1mindex 8d86ef5..0000000[m
Binary files a/expenses/__pycache__/views.cpython-312.pyc and /dev/null differ
[1mdiff --git a/expenses/urls.py b/expenses/urls.py[m
[1mdeleted file mode 100644[m
[1mindex f9de274..0000000[m
[1m--- a/expenses/urls.py[m
[1m+++ /dev/null[m
[36m@@ -1,13 +0,0 @@[m
[31m-from django.urls import path[m
[31m-from . import views[m
[31m-[m
[31m-urlpatterns = [[m
[31m-    path('', views.expense_list, name='expense_list'),[m
[31m-    # Add paths for adding, editing, and deleting expenses[m
[31m-][m
[31m-from django.contrib.auth import views as auth_views[m
[31m-[m
[31m-urlpatterns = [[m
[31m-    path('login/', auth_views.LoginView.as_view(), name='login'),[m
[31m-    path('logout/', auth_views.LogoutView.as_view(), name='logout'),[m
[31m-][m
[1mdiff --git a/templates/add_expense.html b/templates/expenses/add_expense.html[m
[1msimilarity index 100%[m
[1mrename from templates/add_expense.html[m
[1mrename to templates/expenses/add_expense.html[m
[1mdiff --git a/templates/base.html b/templates/expenses/base.html[m
[1msimilarity index 100%[m
[1mrename from templates/base.html[m
[1mrename to templates/expenses/base.html[m
[1mdiff --git a/templates/expense_list.html b/templates/expenses/expense_list.html[m
[1msimilarity index 100%[m
[1mrename from templates/expense_list.html[m
[1mrename to templates/expenses/expense_list.html[m
[1mdiff --git a/templates/index.html b/templates/expenses/index.html[m
[1msimilarity index 100%[m
[1mrename from templates/index.html[m
[1mrename to templates/expenses/index.html[m
[1mdiff --git a/templates/login.html b/templates/expenses/login.html[m
[1msimilarity index 100%[m
[1mrename from templates/login.html[m
[1mrename to templates/expenses/login.html[m
[1mdiff --git a/templates/logout.html b/templates/expenses/logout.html[m
[1msimilarity index 100%[m
[1mrename from templates/logout.html[m
[1mrename to templates/expenses/logout.html[m
