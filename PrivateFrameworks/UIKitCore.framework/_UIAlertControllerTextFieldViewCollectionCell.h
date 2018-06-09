/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAlertControllerTextFieldViewCollectionCell : UICollectionViewCell {
    UITapGestureRecognizer * _selectButtonGesture;
    _UIAlertControllerTextFieldView * _textField;
}

@property (nonatomic, readonly) _UIAlertControllerTextFieldView *textField;

- (void).cxx_destruct;
- (void)_selectButton:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preferredFocusedView;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)setTextField:(id)arg1 horizontalMargin:(double)arg2;
- (id)textField;

@end
