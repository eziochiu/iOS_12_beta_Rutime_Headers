/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKSettingsHeaderAlertView : UIView <PSHeaderFooterView> {
    NSString * _descriptionText;
    NSString * _headerText;
    UITextView * _textView;
}

@property (nonatomic, retain) NSString *descriptionText;
@property (nonatomic, retain) NSString *headerText;

- (void).cxx_destruct;
- (id)descriptionText;
- (id)headerText;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
