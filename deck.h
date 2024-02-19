#ifndef DECK_H
#define DECK_H

#include <stdlib.h>
#include <string.h>

/**
 * enum kind_e - This enumeration represents the different
 * kinds or suits of playing cards
 * @SPADE: Represents the suit of spades
 * @HEART: Represents the suit of hearts
 * @CLUB: Represents the suit of clubs
 * @DIAMOND: Represents the suit of diamonds
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

int _strcmp(const char *s1, const char *s2);
int get_value(deck_node_t *card);
void insertion_sort_deck_kind(deck_node_t **deck);
void insertion_sort_deck_value(deck_node_t **deck);
void sort_deck(deck_node_t **deck);

#endif /*DECK_H*/
