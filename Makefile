################################################################################
#                                                                              #
#                                                                              #
#    Makefile                                              by CanTale_Games    #
#                                                                              #
#                                                                              #
################################################################################

all:
	@echo Call \"make test\", instead.

test:
	@make r -sC test

re:
	@make re -sC srcs
	@make re r -sC test

r:
	@make -sC srcs
	@make r -sC test


.PHONY: all test re r
