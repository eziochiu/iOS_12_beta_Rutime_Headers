/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableAttributedString : NSAttributedString

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)addAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addAttributesWeakly:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)appendAttributedString:(id)arg1;
- (void)beginEditing;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)endEditing;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)mutableString;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (void)setAttributedString:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (void)mf_addAttribute:(id)arg1 value:(id)arg2;
- (void)mf_removeAttribute:(id)arg1;
- (void)mf_setString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore

- (void)dd_appendAttributedString:(id)arg1;
- (void)dd_chopResults;
- (void)dd_offsetResultsBy:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

- (void)dd_appendUrl:(id)arg1 context:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 backedAttributes:(id)arg4;
- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 context:(id)arg2;
- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 context:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 usingURLificationBlock:(id /* block */)arg2 context:(id)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)dd_replaceResultAttributesWithSimpleLinksForTypes:(unsigned long long)arg1 context:(id)arg2;
- (void)dd_resetResults;
- (void)dd_resetResults:(bool)arg1;
- (bool)dd_urlifyClientRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 index:(unsigned long long)arg2 context:(id)arg3;
- (bool)dd_urlifyResult:(id)arg1 withBlock:(id /* block */)arg2 referenceDate:(id)arg3 context:(id)arg4;

// Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager

+ (id)_doc_attributedStringForTitle:(id)arg1 textAttributes:(id)arg2 tagColors:(id)arg3 tagDrawingTraits:(struct { double x1; double x2; double x3; long long x4; })arg4;
+ (id)_doc_gridAttributedStringForTitle:(id)arg1 tagColors:(id)arg2 font:(id)arg3 layoutDirection:(long long)arg4;
+ (id)_doc_spacerImageWithWidth:(double)arg1;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

- (struct CGSize { double x1; double x2; })scaleFontAndKerningToFitSize:(struct CGSize { double x1; double x2; })arg1 minimumFontSize:(double)arg2 minimumKerning:(double)arg3 stillDidntFit:(bool*)arg4;
- (double)scaleFontSizeByAmount:(double)arg1 minimumFontSize:(double)arg2;
- (double)scaleNumericAttribute:(id)arg1 byAmount:(double)arg2;
- (void)scaleToFitWidth:(double)arg1;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (void)removeCharactersWithAttribute:(id)arg1;
- (void)replaceAttribute:(id)arg1 value:(id)arg2 withValue:(id)arg3;
- (void)replaceNewlinesWithSpaces;
- (void)trimWhitespace;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (void)appendAttributedSubstring:(id)arg1 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)appendString:(id)arg1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedSubstring:(id)arg2 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (void)ic_addTextBlocks:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)ic_convertParagraphStyleToBodyInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setParagraphStyleForWritingDirection:(long long)arg1 andAlignment:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

- (id)attributedStringByTrimmingEmptySpaceEdges;
- (unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (void)scrcAppendFormat:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput

- (void)scrAttributedStringTrimTrailingNewlines;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

- (void)sxaxApplyLowerPitchTokenToRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech

- (void)appendString:(id)arg1 withAttributes:(id)arg2;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

- (bool)_attributeFixingInProgress;
- (void)_changeIntAttribute:(id)arg1 by:(long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)_fixGlyphInfo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setAttributeFixingInProgress:(bool)arg1;
- (bool)_shouldSetOriginalFontAttribute;
- (void)convertBidiControlCharactersToWritingDirection;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned long long)arg1;
- (void)convertWritingDirectionToBidiControlCharacters;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned long long)arg1;
- (void)fixAttachmentAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixFontAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (bool)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (void)setAlignment:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setBaseWritingDirection:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)subscriptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)superscriptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)unscriptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void)_ui_restoreOriginalFontAttributes;

// Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices

- (void)appendString:(id)arg1 withAttributes:(id)arg2;

@end
