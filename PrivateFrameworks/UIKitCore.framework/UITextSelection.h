/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextSelection : NSObject {
    UITextRange * _base;
    UIResponder<UITextInputPrivate> * _document;
    long long  _granularity;
    UITextRange * _initialExtent;
    bool  _isCommitting;
    UITextRange * _selectedRange;
}

@property (nonatomic, retain) UITextRange *base;
@property (nonatomic, readonly) UIResponder<UITextInputPrivate> *document;
@property (getter=_domRange, nonatomic, readonly) DOMRange *domRange;
@property (nonatomic) long long granularity;
@property (nonatomic, retain) UITextRange *initialExtent;
@property (nonatomic, readonly) bool isCommitting;
@property (nonatomic, retain) UITextRange *selectedRange;

- (void).cxx_destruct;
- (id)_domRange;
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;
- (void)alterSelection:(struct CGPoint { double x1; double x2; })arg1 granularity:(long long)arg2;
- (void)alterSelectionGranularity:(long long)arg1;
- (id)base;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectAtBeginOfDocument;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectAtEndOfDocument;
- (void)clearRangedSelectionInitialExtent;
- (void)clearSelection;
- (struct CGPoint { double x1; double x2; })clipPoint:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })closestCaretRectForPoint:(struct CGPoint { double x1; double x2; })arg1 inSelection:(bool)arg2;
- (void)collapseSelection;
- (void)commit;
- (void)dealloc;
- (id)document;
- (void)extendSelectionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)granularity;
- (bool)hasEditableSelection;
- (void)increaseSelectionGranularity;
- (id)initWithDocument:(id)arg1;
- (id)initialExtent;
- (void)invalidate;
- (bool)isCommitting;
- (void)moveCaretToBoundaryOfWhitespaceOrLine;
- (unsigned long long)offsetInMarkedText;
- (bool)pointAtEndOfLine:(struct CGPoint { double x1; double x2; })arg1;
- (bool)pointAtStartOfLine:(struct CGPoint { double x1; double x2; })arg1;
- (void)selectAll;
- (id)selectedRange;
- (id)selectedText;
- (void)selectionChanged;
- (id)selectionRects;
- (void)setBase:(id)arg1;
- (void)setGranularity:(long long)arg1;
- (void)setHybridSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialExtent:(id)arg1;
- (void)setRangedSelectionBaseToCurrentSelection;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (bool)setRangedSelectionExtentPoint:(struct CGPoint { double x1; double x2; })arg1 baseIsStart:(bool)arg2;
- (bool)setRangedSelectionExtentPoint:(struct CGPoint { double x1; double x2; })arg1 baseIsStart:(bool)arg2 allowFlipping:(bool)arg3;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSelectedRange:(id)arg1;
- (void)setSelectionWithFirstPoint:(struct CGPoint { double x1; double x2; })arg1 secondPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)smartExtendRangedSelection:(int)arg1 downstream:(bool)arg2;
- (id)wordContainingCaretSelection;

@end
