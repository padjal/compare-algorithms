#pragma once

/*
 * Generate a vector with random numbers of elements.
 *
 * PARAMS
 *  elems       The number of elements in the vector.
 *  min_elem    The minimum allowed element.
 *  max_elem    The maximum allowed element.
 */
std::vector<int>& generateVector(int elems, int min_elem, int max_elem);

/*
 * Generate an almost sorted vector.
 *
 * PARAMS
 *  elems       The number of elements in the vector.
 *  min_elem    The minimum allowed element.
 *  max_elem    The maximum allowed element.
 */
std::vector<int>& generateAlmostSortedVector(int elems);

/*
 * Generate a vector with reversely sorted elements from the given element
 * to zero.
 *
 * PARAMS
 *  max_elem    The biggest allowed element.
 */
std::vector<int>& generateReverseSortedVector(int max_elem);

/*
 * Checks whether the vector is sorted correctly.
 */
bool isSorted(const std::vector<int>& v);