from django.shortcuts import render
from .models import Expense

def expense_list(request):
    expenses = Expense.objects.filter(user=request.user)
    return render(request, 'expenses/expense_list.html', {'expenses': expenses})

from django.shortcuts import render, redirect
from .forms import ExpenseForm

def add_expense(request):
    if request.method == 'POST':
        form = ExpenseForm(request.POST)
        if form.is_valid():
            expense = form.save(commit=False)
            expense.user = request.user
            expense.save()
            return redirect('expense_list')
    else:
        form = ExpenseForm()
    return render(request, 'expenses/add_expense.html', {'form': form})

from django.contrib.auth.decorators import login_required

@login_required
def expense_list(request):
    ...
