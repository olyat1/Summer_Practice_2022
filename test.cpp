#include "pch.h"

Student actual[4] = {
	{ 5, "255", "Пономаренко", 0, 0, 0, 0 },
	{ 2, "525а", "Шевчук", 0, 0, 0, 0 },
	{ 2, "525", "Гнатюк", 0, 0, 0, 0 },
	{ 1, "111", "Василенко", 0, 0, 0 }
};

#define EXPECT_ARRAY_EQ(ARRAY_A, ARRAY_B, N) \
	for(int i = 0; i < N; i++) { \
		EXPECT_EQ(ARRAY_A[i].course, ARRAY_B[i].course); \
		EXPECT_EQ(strcmp(ARRAY_A[i].group, ARRAY_B[i].group), 0); \
		EXPECT_EQ(strcmp(ARRAY_A[i].surname, ARRAY_B[i].surname), 0); \
		EXPECT_EQ(ARRAY_A[i].grades.great, ARRAY_B[i].grades.great); \
		EXPECT_EQ(ARRAY_A[i].grades.good, ARRAY_B[i].grades.good); \
		EXPECT_EQ(ARRAY_A[i].grades.fine, ARRAY_B[i].grades.fine); \
		EXPECT_EQ(ARRAY_A[i].grades.bad, ARRAY_B[i].grades.bad); \
	}

TEST(Testing, SortByCourse) {
	Student expected[4] = {
		{ 1, "111", "Василенко", 0, 0, 0, 0 },
		{ 2, "525а", "Шевчук", 0, 0, 0, 0 },
		{ 2, "525", "Гнатюк", 0, 0, 0, 0 },
		{ 5, "255", "Пономаренко", 0, 0, 0, 0 }
	};

	timSort(actual, 0, 4);
	EXPECT_ARRAY_EQ(expected, actual, 4);
}

TEST(Testing, SortByGroup) {
	Student expected[4] = {
		{ 1, "111", "Василенко", 0, 0, 0, 0 },
		{ 5, "255", "Пономаренко", 0, 0, 0, 0 },
		{ 2, "525", "Гнатюк", 0, 0, 0, 0 },
		{ 2, "525а", "Шевчук", 0, 0, 0, 0 }
	};

	timSort(actual, 1, 4);
	EXPECT_ARRAY_EQ(expected, actual, 4);
}

TEST(Testing, SortBySurname) {
	Student expected[4] = {
		{ 1, "111", "Василенко", 0, 0, 0, 0 },
		{ 2, "525", "Гнатюк", 0, 0, 0, 0 },
		{ 5, "255", "Пономаренко", 0, 0, 0, 0 },
		{ 2, "525а", "Шевчук", 0, 0, 0, 0 }
	};

	timSort(actual, 2, 4);
	EXPECT_ARRAY_EQ(expected, actual, 4);
}