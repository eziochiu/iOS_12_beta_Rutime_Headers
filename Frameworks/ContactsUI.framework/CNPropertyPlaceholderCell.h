/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyPlaceholderCell : CNLabeledCell {
    UILabel * _label;
}

@property (nonatomic, retain) UILabel *label;

- (void).cxx_destruct;
- (id)label;
- (id)labelView;
- (double)minCellHeight;
- (void)setCardGroupItem:(id)arg1;
- (void)setLabel:(id)arg1;
- (bool)shouldIndentWhileEditing;
- (bool)shouldPerformDefaultAction;

@end
