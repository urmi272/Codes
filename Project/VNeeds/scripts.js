/* scripts.js */
document.addEventListener('DOMContentLoaded', function() {
    // Simulate item data
    const items = [
        { title: 'Textbook', description: 'Math Textbook', price: 20, category: 'textbooks', image: 'textbook.jpg' },
        { title: 'Laptop', description: 'Dell XPS 13', price: 800, category: 'electronics', image: 'laptop.jpg' },
        { title: 'Jacket', description: 'Leather Jacket', price: 50, category: 'fashion', image: 'jacket.jpg' },
        // Add more items as needed
    ];

    // Function to render items
    const renderItems = (filteredItems) => {
        const itemList = document.getElementById('item-list');
        itemList.innerHTML = ''; // Clear existing items
        filteredItems.forEach(item => {
            const itemElement = document.createElement('div');
            itemElement.classList.add('item');
            itemElement.innerHTML = `
                <img src="${item.image}" alt="${item.title}">
                <h3>${item.title}</h3>
                <p>${item.description}</p>
                <p class="price">$${item.price}</p>
                <button class="buy-button">Buy Now</button>
            `;
            itemList.appendChild(itemElement);
        });
    };

    // Initial render
    renderItems(items);

    // Search and filter functionality
    const searchBar = document.getElementById('search-bar');
    const categoryFilter = document.getElementById('category-filter');

    searchBar.addEventListener('input', () => {
        const searchTerm = searchBar.value.toLowerCase();
        const filteredItems = items.filter(item =>
            item.title.toLowerCase().includes(searchTerm) ||
            item.description.toLowerCase().includes(searchTerm)
        );
        renderItems(filteredItems);
    });

    categoryFilter.addEventListener('change', () => {
        const selectedCategory = categoryFilter.value;
        const filteredItems = selectedCategory ?
            items.filter(item => item.category === selectedCategory) :
            items;
        renderItems(filteredItems);
    });
    // Register event listener
document.getElementById('register-form').addEventListener('submit', function(event) {
    event.preventDefault();
    const email = document.getElementById('register-email').value;
    const password = document.getElementById('register-password').value;
    // Perform college email verification and register user
    alert('Registration successful');
});

// Login event listener
document.getElementById('login-form').addEventListener('submit', function(event) {
    event.preventDefault();
    const email = document.getElementById('login-email').value;
    const password = document.getElementById('login-password').value;
    // Perform login
    alert('Login successful');
});
// New item listing event listener
document.getElementById('new-item-form').addEventListener('submit', function(event) {
    event.preventDefault();
    const title = document.getElementById('item-title').value;
    const description = document.getElementById('item-description').value;
    const price = document.getElementById('item-price').value;
    const image = document.getElementById('item-image').files[0];
    const category = document.getElementById('item-category').value;
    // Upload item details and image
    alert('Item listed successfully');
});
// Search and filter functionality
const conditionFilter = document.getElementById('condition-filter');

searchBar.addEventListener('input', filterItems);
categoryFilter.addEventListener('change', filterItems);
conditionFilter.addEventListener('change', filterItems);

function filterItems() {
    const searchTerm = searchBar.value.toLowerCase();
    const selectedCategory = categoryFilter.value;
    const selectedCondition = conditionFilter.value;
    // Filter and render items based on search term, category, and condition
}
// Messaging functionality
document.getElementById('send-button').addEventListener('click', function() {
    const message = document.getElementById('message-input').value;
    // Send message to the server and display in chat window
    alert('Message sent');
});
// Review submission functionality
document.getElementById('submit-review').addEventListener('click', function() {
    const reviewText = document.getElementById('review-text').value;
    const reviewRating = document.getElementById('review-rating').value;
    // Submit review to the server
    alert('Review submitted');
});

});
