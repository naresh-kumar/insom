.PHONY: clean All

All:
	@echo ----------Building project:[ divpro - Debug ]----------
	@cd "divpro" && "$(MAKE)" -f "divpro.mk"
clean:
	@echo ----------Cleaning project:[ divpro - Debug ]----------
	@cd "divpro" && "$(MAKE)" -f "divpro.mk" clean
