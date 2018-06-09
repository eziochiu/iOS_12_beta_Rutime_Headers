/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProductDescriptionTableViewCell : UITableViewCell <UITextViewDelegate> {
    <MusicProductDescriptionTableViewCellDelegate> * _delegate;
    struct { 
        unsigned int productDescriptionDidChange : 1; 
    }  _delegateRespondsToSelector;
    UILabel * _descriptionHeaderLabel;
    MusicMediaDetailTintInformation * _detailTintInformation;
    bool  _expanded;
    bool  _hasValidMoreButtonSize;
    UIButton * _moreButton;
    bool  _needsForcedTextViewUpdate;
    UITextView * _placeholderTextView;
    MusicProductDescription * _productDescription;
    long long  _productDescriptionMaximumLengthForTextInput;
    long long  _productDescriptionTextStyle;
    NSString * _productDescriptionTitle;
    UITextView * _textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicProductDescriptionTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) MusicMediaDetailTintInformation *detailTintInformation;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MusicProductDescription *productDescription;
@property (nonatomic) long long productDescriptionMaximumLengthForTextInput;
@property (nonatomic) long long productDescriptionTextStyle;
@property (nonatomic, copy) NSString *productDescriptionTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attributedTextWithProductDescriptionStoreEditorNotes:(id)arg1 textColor:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateContentBoundsWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateHeaderLabelFrameWithinContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)_calculateTextViewMaximumNumberOfLinesWithEditing:(bool)arg1;
- (void)_handlePreferredContentSizeDidChangeNotification:(id)arg1;
- (id)_loadTextAttributes;
- (void)_moreButtonAction:(id)arg1;
- (id)_newTextView;
- (id)_placeholderAttributedText;
- (void)_updateForPreferredFontChange;
- (void)_updateMaximumNumberOfLinesWithEditing:(bool)arg1;
- (void)_updateMoreButtonPropertiesWithTextViewSize:(struct CGSize { double x1; double x2; })arg1 positionYDelta:(double)arg2;
- (void)_updatePlaceholderTextViewVisibility;
- (void)_updateTextViewEditabilityForced:(bool)arg1 withEditing:(bool)arg2;
- (void)_updateTextViewWithProductDescriptionWithLayout:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (id)detailTintInformation;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isExpanded;
- (void)layoutSubviews;
- (id)productDescription;
- (long long)productDescriptionMaximumLengthForTextInput;
- (long long)productDescriptionTextStyle;
- (id)productDescriptionTitle;
- (void)setDelegate:(id)arg1;
- (void)setDetailTintInformation:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setProductDescription:(id)arg1;
- (void)setProductDescriptionMaximumLengthForTextInput:(long long)arg1;
- (void)setProductDescriptionTextStyle:(long long)arg1;
- (void)setProductDescriptionTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;

@end
