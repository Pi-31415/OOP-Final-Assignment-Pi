COMPILER=g++
OPTS=-c

output: main.cpp Functions.o Person.o Customer.o CustomerList.o DeliveryMan.o DeliveryManList.o Item.o ItemList.o Order.o FoodDeliveryDatabase.o
	clear
	$(COMPILER) $^ -o $@
	./output
	
Functions.o: Functions.cpp *.h
	$(COMPILER) $(OPTS) $<

Person.o: Person.cpp *.h
	$(COMPILER) $(OPTS) $<

Customer.o: Customer.cpp *.h
	$(COMPILER) $(OPTS) $<

DeliveryMan.o: DeliveryMan.cpp *.h
	$(COMPILER) $(OPTS) $<

CustomerList.o: CustomerList.cpp *.h
	$(COMPILER) $(OPTS) $<

DeliveryManList.o: DeliveryManList.cpp *.h
	$(COMPILER) $(OPTS) $<

Item.o: Item.cpp *.h
	$(COMPILER) $(OPTS) $<

ItemList.o: ItemList.cpp *.h
	$(COMPILER) $(OPTS) $<

Order.o: Order.cpp *.h
	$(COMPILER) $(OPTS) $<

FoodDeliveryDatabase.o: FoodDeliveryDatabase.cpp *.h
	$(COMPILER) $(OPTS) $<

clean:
	rm -rf *.o output