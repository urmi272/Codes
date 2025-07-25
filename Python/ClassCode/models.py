# # Install Django
# pip install django

# # Create a new Django project
# django-admin startproject auction_project

# # Navigate to the project directory
# cd auction_project

# # Create a new app
# python manage.py startapp auction

# Define models in auction/models.py
from django.db import models
from django.contrib.auth.models import User


class Item(models.Model):
    title = models.CharField(max_length=200)
    description = models.TextField()
    starting_bid = models.DecimalField(max_digits=10, decimal_places=2)
    current_bid = models.DecimalField(max_digits=10, decimal_places=2)
    end_time = models.DateTimeField()

class Bid(models.Model):
    item = models.ForeignKey(Item, on_delete=models.CASCADE)
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    amount = models.DecimalField(max_digits=10, decimal_places=2)
    timestamp = models.DateTimeField(auto_now_add=True)

# Create views in auction/views.py
from django.shortcuts import render
from .models import Item

def item_list(request):
    items = Item.objects.all()
    return render(request, 'auction/item_list.html', {'items': items})

def item_detail(request, pk):
    item = Item.objects.get(pk=pk)
    return render(request, 'auction/item_detail.html', {'item': item})
