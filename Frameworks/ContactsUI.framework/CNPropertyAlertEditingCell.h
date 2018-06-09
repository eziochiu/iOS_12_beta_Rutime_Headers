/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyAlertEditingCell : CNPropertyAlertCell

+ (bool)wantsHorizontalLayout;

- (double)minCellHeight;
- (bool)shouldIndentWhileEditing;
- (id)variableConstraints;

@end
