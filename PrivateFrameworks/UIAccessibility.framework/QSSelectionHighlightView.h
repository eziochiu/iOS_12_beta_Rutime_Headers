/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface QSSelectionHighlightView : UIView {
    NSArray * _highlightSelectionRects;
    UIColor * _selectionColor;
    bool  _sentenceHighlight;
    UIColor * _underlineColor;
}

@property (nonatomic, retain) NSArray *highlightSelectionRects;
@property (nonatomic, retain) UIColor *selectionColor;
@property (nonatomic) bool sentenceHighlight;
@property (nonatomic, retain) UIColor *underlineColor;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)highlightSelectionRects;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)selectionColor;
- (bool)sentenceHighlight;
- (void)setHighlightSelectionRects:(id)arg1;
- (void)setSelectionColor:(id)arg1;
- (void)setSentenceHighlight:(bool)arg1;
- (void)setUnderlineColor:(id)arg1;
- (id)underlineColor;

@end
