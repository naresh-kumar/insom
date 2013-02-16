.PHONY: clean All

All:
	@echo ----------Building project:[ feb13magicboard - Debug ]----------
	@cd "feb13magicboard" && "$(MAKE)" -f "feb13magicboard.mk"
clean:
	@echo ----------Cleaning project:[ feb13magicboard - Debug ]----------
	@cd "feb13magicboard" && "$(MAKE)" -f "feb13magicboard.mk" clean
