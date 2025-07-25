from django.urls import path
from . import views  # Correct import statement

urlpatterns = [
    path('items/', views.item_list, name='item_list'),
    path('items/<int:pk>/', views.item_detail, name='item_detail'),
    path('bids/', views.bid_list, name='bid_list'),
]
