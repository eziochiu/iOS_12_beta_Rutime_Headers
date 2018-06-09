/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager <UITextFieldDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_textFieldEndEditing:(id)arg1;
- (void)_textFieldEndEditingOnReturn:(id)arg1;
- (void)_textFieldStartEditing:(id)arg1;
- (void)_textValueChanged:(id)arg1;
- (double)defaultTextFieldFontSizeForCell:(id)arg1;
- (id)defaultTextLabelFontForCell:(id)arg1;
- (id)detailTextLabelForCell:(id)arg1;
- (id)editableTextFieldForCell:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2;
- (void)layoutSubviewsOfCell:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;

@end
