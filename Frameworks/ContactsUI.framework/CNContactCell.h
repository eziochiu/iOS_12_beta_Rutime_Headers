/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactCell : UITableViewCell {
    CNCardGroupItem * _cardGroupItem;
    NSArray * _constantConstraints;
    NSArray * _variableConstraints;
}

@property (nonatomic, retain) CNCardGroupItem *cardGroupItem;
@property (nonatomic, readonly) NSArray *constantConstraints;
@property (nonatomic, readonly) bool hasGapBetweenSeparatorAndTrailingEdge;
@property (nonatomic, readonly) double minCellHeight;
@property (nonatomic) bool showSeparator;
@property (nonatomic, readonly) NSArray *variableConstraints;

- (void).cxx_destruct;
- (id)cardGroupItem;
- (id)constantConstraints;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (bool)hasGapBetweenSeparatorAndTrailingEdge;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (double)minCellHeight;
- (void)performAccessoryAction;
- (void)performDefaultAction;
- (void)prepareForReuse;
- (void)setCardGroupItem:(id)arg1;
- (void)setShowSeparator:(bool)arg1;
- (bool)shouldPerformAccessoryAction;
- (bool)shouldPerformDefaultAction;
- (bool)showSeparator;
- (void)updateConstraints;
- (id)variableConstraints;

@end
