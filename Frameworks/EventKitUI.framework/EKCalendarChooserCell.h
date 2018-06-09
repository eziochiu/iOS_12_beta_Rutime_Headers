/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarChooserCell : EKUITableViewCell {
    UIColor * _checkMarkColor;
    bool  _checked;
    UIImageView * _checkmarkView;
    UIImage * _colorDot;
    NSTextAttachment * _colorDotAttachment;
    UIImage * _colorDotHighlighted;
    UIImageView * _colorDotView;
    bool  _multiSelectStyle;
    UIColor * _selectionCheckmarkColor;
    bool  _shouldAnimate;
    bool  _showCheckmarksOnLeft;
    bool  _showingSelectionCheckmark;
    bool  _showsColorDot;
    NSString * _textLabelText;
}

@property (nonatomic) bool checked;
@property (nonatomic) bool multiSelectStyle;
@property (nonatomic, retain) UIColor *selectionCheckmarkColor;
@property (nonatomic) bool shouldAnimate;
@property (nonatomic) bool showCheckmarksOnLeft;
@property (nonatomic) bool showingSelectionCheckmark;
@property (nonatomic) bool showsColorDot;
@property (nonatomic, retain) NSString *textLabelText;

- (void).cxx_destruct;
- (id)_multiselectBackgroundColor;
- (void)_updateTextLabelTextWithColorDot;
- (bool)checked;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (bool)multiSelectStyle;
- (void)prepareForReuse;
- (id)selectionCheckmarkColor;
- (void)setAccessoryType:(long long)arg1;
- (void)setChecked:(bool)arg1;
- (void)setColorDotHighlightedImage:(id)arg1;
- (void)setColorDotImage:(id)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setMultiSelectStyle:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelectionCheckmarkColor:(id)arg1;
- (void)setShouldAnimate:(bool)arg1;
- (void)setShowCheckmarksOnLeft:(bool)arg1;
- (void)setShowingSelectionCheckmark:(bool)arg1;
- (void)setShowsColorDot:(bool)arg1;
- (void)setTextLabelText:(id)arg1;
- (bool)shouldAnimate;
- (bool)showCheckmarksOnLeft;
- (bool)showingSelectionCheckmark;
- (bool)showsColorDot;
- (id)textLabelText;
- (double)textLeadingIndent;
- (void)updateSelectionCheckmark;

@end
