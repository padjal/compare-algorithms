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

//Is broken. Check 5, 2, 1
void bubbleSort(std::vector<int>& numbers);

void countSort(std::vector<int>& numbers);

void selectionSort(std::vector<int>& numbers);

void testSort();
