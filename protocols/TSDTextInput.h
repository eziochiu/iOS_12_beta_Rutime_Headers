/* made by EzioChiu.
 */

@protocol TSDTextInput <TSDEditor, UIResponderStandardEditActions>

@required

- (unsigned long long)charIndexByMovingPosition:(TSDTextPosition *)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 preferPosition:(double*)arg4;
- (void)clearMarkedRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })editRange;
- (void)endEditing;
- (void)extendSelectionLeft;
- (void)extendSelectionRight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (UIView *)inputAccessoryView;
- (UIView *)inputView;
- (void)insertText:(NSString *)arg1;
- (bool)isCharIndex:(unsigned long long)arg1 withEolAffinity:(bool)arg2 atBoundary:(long long)arg3 inDirection:(long long)arg4;
- (bool)isCharIndex:(unsigned long long)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })markedRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfWordEnclosingCharIndex:(unsigned long long)arg1 backward:(bool)arg2;
- (void)replaceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withText:(NSString *)arg2;
- (long long)returnKeyType;
- (NSArray *)selectionRectsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (TSKSelection<TSDTextSelection> *)selectionWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setMarkedText:(NSString *)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setSelectionWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 endOfLine:(bool)arg2;
- (UIColor *)textColorAtCharIndex:(unsigned long long)arg1;
- (UIFont *)textFontAtCharIndex:(unsigned long long)arg1;
- (NSString *)textInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (TSKSelection<TSDTextSelection> *)textInputSelection;
- (bool)textIsVerticalAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)textLength;
- (bool)wantsKeyboard;

@optional

- (bool)acceptsColumnBreaks;
- (bool)acceptsHyperlink;
- (bool)acceptsLineBreaks;
- (bool)acceptsPageBreaks;
- (bool)acceptsSectionBreaks;
- (bool)acceptsTabs;
- (void)arrowKeyReceivedInDirection:(int)arg1 withModifierKeys:(int)arg2;
- (long long)autocorrectionType;
- (bool)canResignFirstResponder;
- (unsigned long long)closestCharIndexToPoint:(struct CGPoint { double x1; double x2; })arg1 isAtEndOfLine:(bool*)arg2;
- (void)endEditingAndSelectParent:(id)arg1;
- (void)insertColumnBreak:(id)arg1;
- (void)insertDictationResult:(NSArray *)arg1;
- (void)insertHyperlink:(id)arg1;
- (void)insertLineBreak:(id)arg1;
- (void)insertNewlineIgnoringFieldEditor:(id)arg1;
- (void)insertPageBreak:(id)arg1;
- (void)insertSectionBreak:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)insertTabIgnoringFieldEditor:(id)arg1;
- (bool)isSecureTextEntry;
- (NSArray *)keyCommands;
- (TSKSelection<TSDTextSelection> *)selectionForArrowKeys;
- (void)setBaseWritingDirection:(long long)arg1 forParagraphsWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setSelectionForArrowKeys:(TSKSelection<TSDTextSelection> *)arg1;
- (UIView *)textInputView;
- (NSString *)unfilteredText;
- (bool)wantsRawArrowKeyEvents;
- (long long)writingDirectionForCharIndex:(unsigned long long)arg1;

@end
