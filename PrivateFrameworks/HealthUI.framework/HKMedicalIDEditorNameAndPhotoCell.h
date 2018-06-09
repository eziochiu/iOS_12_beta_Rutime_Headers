/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMedicalIDEditorNameAndPhotoCell : HKMedicalIDEditorMultilineStringCell <UITextViewDelegate> {
    UIButton * _editPhotoButton;
    UIButton * _editPhotoLabelButton;
    UIView * _nameBottomSeparator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIButton *editPhotoButton;
@property (nonatomic, readonly) UIButton *editPhotoLabelButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) UIImage *photo;
@property (readonly) Class superclass;

+ (bool)showsLabelAndValue;

- (void).cxx_destruct;
- (void)_adjustEditPhotoButtonFontSizeIfNecessary;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_largeTextLayoutSubviews;
- (void)_regularLayoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_separatorFrame;
- (id)editPhotoButton;
- (id)editPhotoLabelButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)name;
- (id)photo;
- (void)setName:(id)arg1;
- (void)setPhoto:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;

@end
