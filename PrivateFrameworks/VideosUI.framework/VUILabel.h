/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILabel : _TVLabel {
    bool  _lastSelectedOrHighlighted;
    bool  _selected;
    VUITextLayout * _textLayout;
}

@property (nonatomic, retain) VUITextLayout *textLayout;

+ (unsigned long long)_numberOfLinesForTraitCollection:(id)arg1 textLayout:(id)arg2;
+ (id)labelWithString:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3;

- (void).cxx_destruct;
- (void)_updateTextColor:(bool)arg1;
- (double)baselineHeight;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setTextLayout:(id)arg1;
- (id)textLayout;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
