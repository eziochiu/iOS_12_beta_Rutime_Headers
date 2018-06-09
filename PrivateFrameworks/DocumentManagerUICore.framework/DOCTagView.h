/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCTagView : UIView {
    <DOCTagViewDelegate> * _delegate;
    UILabel * _tagNameLabel;
    UIVisualEffectView * _tagNameLabelWrapper;
    DOCTag * _tagValue;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) <DOCTagViewDelegate> *delegate;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) UILabel *tagNameLabel;
@property (nonatomic, readonly) UIVisualEffectView *tagNameLabelWrapper;
@property (nonatomic, retain) DOCTag *tagValue;

- (void).cxx_destruct;
- (bool)adjustsFontForContentSizeCategory;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)delegate;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)longPressGestureRecognizer:(id)arg1;
- (void)removeTag:(id)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setTagValue:(id)arg1;
- (id)tagNameLabel;
- (id)tagNameLabelWrapper;
- (id)tagValue;
- (id)viewForLastBaselineLayout;

@end
