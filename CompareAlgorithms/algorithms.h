#pragma once

/*
 * Needed algorithms:
 *  - Selection
 *  - Bubble
 *  - Bubble with Ayverson 1
 *  - Bubble with Ayverson 1 + 2
 *  - Simple insertion
 *  - Double insertion
 *  - Count (stable)
 *  - Digit
 *  - Merge
 *  - Quick (pivot on Hoare and Lumuto)
 *  - Pyramid
 */

void bubbleSort(std::vector<int>* numbers);

void countSort(std::vector<int>* numbers);

int selectionSort(std::vector<int>* numbers);

void testSort();
