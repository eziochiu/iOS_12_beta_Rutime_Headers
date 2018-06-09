/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXEditableNavigationTitleView : UIView <UITextFieldDelegate> {
    <PXEditableNavigationTitleViewDelegate> * _delegate;
    struct { 
        bool validateNewText; 
        bool didEndEditing; 
    }  _delegateRespondsTo;
    bool  _editing;
    bool  _isPerformingUpdates;
    struct { 
        bool textColor; 
    }  _needsUpdateFlags;
    NSString * _text;
    _PXEditableNavigationTitleTextField * _textField;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXEditableNavigationTitleViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, readonly) _PXEditableNavigationTitleTextField *textField;

- (void).cxx_destruct;
- (void)_invalidateTextColor;
- (bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_textFieldTextDidChange:(id)arg1;
- (void)_updateIfNeeded;
- (void)_updateTextColorIfNeeded;
- (void)dealloc;
- (id)delegate;
- (void)endEditing;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEditing;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (id)textField;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)tintColorDidChange;

@end
