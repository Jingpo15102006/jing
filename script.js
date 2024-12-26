// Redirect to Facebook when the "Buy" button is clicked
function redirectToFacebook() {
  window.location.href = 'https://www.facebook.com/jingpo.phai.1?mibextid=ZbWKwL';
}

// Add to Cart functionality (optional)
document.querySelectorAll('.cart-button').forEach(button => {
  button.addEventListener('click', () => {
    const size = button.closest('.product-card').querySelector('select').value;
    alert(`Added size ${size} to the cart!`);
  });
});

  
  
