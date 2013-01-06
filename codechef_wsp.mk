.PHONY: clean All

All:
	@echo ----------Building project:[ drunkjan13 - Debug ]----------
	@cd "drunkjan13" && "$(MAKE)" -f "drunkjan13.mk"
clean:
	@echo ----------Cleaning project:[ drunkjan13 - Debug ]----------
	@cd "drunkjan13" && "$(MAKE)" -f "drunkjan13.mk" clean
