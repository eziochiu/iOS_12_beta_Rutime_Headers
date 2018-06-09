/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactActionCell : CNLabeledCell {
    UILabel * _label;
    CNTransportButton * _transportIcon;
}

@property (nonatomic, readonly) CNContactAction *action;
@property (nonatomic, readonly) CNCardActionGroupItem *actionGroupItem;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) CNTransportButton *transportIcon;

- (void).cxx_destruct;
- (id)action;
- (id)actionGroupItem;
- (id)label;
- (id)labelView;
- (double)minCellHeight;
- (id)rightMostView;
- (void)setCardGroupItem:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setTransportIcon:(id)arg1;
- (bool)shouldIndentWhileEditing;
- (bool)shouldPerformDefaultAction;
- (void)tintColorDidChange;
- (id)transportIcon;
- (id)variableConstraints;

@end
