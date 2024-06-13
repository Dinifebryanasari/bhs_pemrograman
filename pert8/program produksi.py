class Product:
    def _init_(self, name, cost_price, selling_price, quantity):
        self.name = name
        self.cost_price = cost_price
        self.selling_price = selling_price
        self.quantity = quantity

class Inventory:
    def _init_(self):
        self.products = []

    def add_product(self, product):
        self.products.append(product)

    def update_quantity(self, product_name, quantity):
        for product in self.products:
            if product.name == product_name:
                product.quantity += quantity
                break

    def get_product(self, product_name):
        for product in self.products:
            if product.name == product_name:
                return product
        return None

    def display_inventory(self):
        print("\nCurrent Inventory:")
        for product in self.products:
            print(f"{product.name}: {product.quantity} units")
        print("\n")

class Sales:
    def _init_(self):
        self.sales_log = []

    def record_sale(self, product_name, quantity, selling_price):
        sale = {
            'product_name': product_name,
            'quantity': quantity,
            'selling_price': selling_price,
            'total': quantity * selling_price
        }
        self.sales_log.append(sale)

    def display_sales(self):
        print("\nSales Log:")
        for sale in self.sales_log:
            print(f"{sale['product_name']} - {sale['quantity']} units sold at {sale['selling_price']} each. Total: {sale['total']}")
        print("\n")

class Finance:
    def _init_(self, initial_capital):
        self.initial_capital = initial_capital
        self.profit = 0

    def update_profit(self, revenue, cost):
        self.profit += (revenue - cost)

    def display_financial_status(self):
        print(f"\nInitial Capital: {self.initial_capital}")
        print(f"Profit: {self.profit}\n")

class Business:
    def _init_(self, initial_capital):
        self.inventory = Inventory()
        self.sales = Sales()
        self.finance = Finance(initial_capital)

    def add_product(self, name, cost_price, selling_price, quantity):
        product = Product(name, cost_price, selling_price, quantity)
        self.inventory.add_product(product)
        self.finance.update_profit(0, cost_price * quantity)

    def sell_product(self, product_name, quantity):
        product = self.inventory.get_product(product_name)
        if product and product.quantity >= quantity:
            self.inventory.update_quantity(product_name, -quantity)
            self.sales.record_sale(product_name, quantity, product.selling_price)
            revenue = quantity * product.selling_price
            cost = quantity * product.cost_price
            self.finance.update_profit(revenue, cost)
        else:
            print("Insufficient inventory or product not found")

    def display_status(self):
        self.inventory.display_inventory()
        self.sales.display_sales()
        self.finance.display_financial_status()