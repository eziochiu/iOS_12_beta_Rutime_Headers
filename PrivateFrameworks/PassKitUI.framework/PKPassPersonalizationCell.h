/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPersonalizationCell : UITableViewCell <UITextFieldDelegate> {
    PKContact * _contact;
    PKPassPersonalizationCellContext * _context;
    <PKPassPersonalizationCellDelegate> * _delegate;
}

@property (nonatomic, readonly) PKContact *contact;
@property (nonatomic, readonly) PKPassPersonalizationCellContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassPersonalizationCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_textFieldFont;
+ (id)_textLabelFont;
+ (double)minimumCellHeight;
+ (double)textLabelWidthForText:(id)arg1;

- (void).cxx_destruct;
- (void)_editableTextFieldChanged:(id)arg1;
- (bool)becomeFirstResponder;
- (id)contact;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setContext:(id)arg1 andContact:(id)arg2;
- (void)setDelegate:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;

@end
