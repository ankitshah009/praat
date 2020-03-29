/* VowelEditor_prefs.h
 *
 * Copyright (C) 2020 David Weenink
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

prefs_begin (VowelEditor)

	prefs_add_int_with_data    (VowelEditor, shell_width,     		1, U"700")
	prefs_add_int_with_data    (VowelEditor, shell_height,     		1, U"700")
	prefs_add_bool_with_data   (VowelEditor, soundFollowsMouse,		1, true)
	prefs_add_enum_with_data   (VowelEditor, window_frequencyScale,	1, kVowelEditor_frequencyScale, Logarithmic)
	prefs_add_double_with_data (VowelEditor, window_f1min,			1, U"200.0")	// Hz
	prefs_add_double_with_data (VowelEditor, window_f1max,			1, U"1200.0")	// Hz
	prefs_add_double_with_data (VowelEditor, window_f2min,			1, U"500.0")	// Hz
	prefs_add_double_with_data (VowelEditor, window_f2max,			1, U"3500.0")	// Hz
	prefs_add_double_with_data (VowelEditor, synthesis_samplingFrequency, 1, U"44100.0") // Hz
	prefs_add_double_with_data (VowelEditor, synthesis_q1,			1, U"10.0")	// F/B
	prefs_add_double_with_data (VowelEditor, synthesis_q2,			1, U"10.0")	// F/B
	prefs_add_double_with_data (VowelEditor, synthesis_f3,			1, U"2500.0")	// Hz
	prefs_add_double_with_data (VowelEditor, synthesis_b3,			1, U"250.0")	// Hz
	prefs_add_double_with_data (VowelEditor, synthesis_f4,			1, U"3500.0")	// Hz
	prefs_add_double_with_data (VowelEditor, synthesis_b4,			1, U"350.0")	// Hz
	prefs_add_double_with_data (VowelEditor, trajectory_markEvery,	1, U"0.05")		// s
	prefs_add_double_with_data (VowelEditor, trajectory_extendDuration,	1, U"0.05") // s
	prefs_add_double_with_data (VowelEditor, trajectory_maximumDuration,	1, U"4.0") // s
	prefs_add_double_with_data (VowelEditor, trajectory_minimumDuration,	1, U"0.01") // s
	prefs_add_enum_with_data   (VowelEditor, marks_speakerType,		1, kVowelEditor_speakerType, Man)
	prefs_add_enum_with_data   (VowelEditor, marks_dataSet,			1, kVowelEditor_marksDataSet, AmericanEnglish)
	prefs_add_string_with_data (VowelEditor, marks_fileName,		1, U"")
	prefs_add_string_with_data (VowelEditor, marks_colour,			1, U"grey")
	prefs_add_double_with_data (VowelEditor, marks_fontSize,		1, U"14.0")
	prefs_add_double_with_data (VowelEditor, f0_start,				1, U"140.0") // Hz
	prefs_add_double_with_data (VowelEditor, f0_slope,				1, U"0.0") // oct/s
	prefs_add_double_with_data (VowelEditor, f0_minimum,			1, U"20.0") // Hz
	prefs_add_double_with_data (VowelEditor, f0_maximum,			1, U"2000.0") // Hz
	prefs_add_double_with_data (VowelEditor, grid_df1,			1, U"200.0") // Hz
	prefs_add_double_with_data (VowelEditor, grid_df2,			1, U"500.0") // Hz

prefs_end (VowelEditor)

/* End of file VowelEditor_prefs.h */
