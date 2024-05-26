var cart = [];

function addItemToCart(name, price) {
  var item = {
    name: name,
    price: price,
  };
  cart.push(item);
  updateCart();
}

function updateCart() {
  var cartItemsList = document.getElementById("cart-items");
  cartItemsList.innerHTML = "";

  for (var i = 0; i < cart.length; i++) {
    var item = cart[i];
    var listItem = document.createElement("li");
    listItem.innerText = item.name + " - $" + item.price.toFixed(2);
    cartItemsList.appendChild(listItem);
  }
}

function placeOrder() {
  var deliveryPerson = prompt("Enter the name of the delivery person:");
  if (deliveryPerson) {
    alert("Order placed successfully. Delivery person: " + deliveryPerson);
    cart = [];
    updateCart();
  }
}
