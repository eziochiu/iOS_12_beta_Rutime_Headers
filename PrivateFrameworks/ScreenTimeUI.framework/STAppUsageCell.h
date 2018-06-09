/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STAppUsageCell : PSTableCell {
    UIButton * _addAllowanceButton;
    <STAppUsageCellDelegate> * _delegate;
    UIImageView * _itemIconView;
    UILabel * _itemNameLabel;
    UILabel * _timeLabel;
    STCandyBarView * _timeProgressView;
    NSLayoutConstraint * _timeProgressWidthConstraint;
    STUsageItem * _usageItem;
}

@property (nonatomic, retain) UIButton *addAllowanceButton;
@property <STAppUsageCellDelegate> *delegate;
@property (nonatomic, retain) UIImageView *itemIconView;
@property (nonatomic, retain) UILabel *itemNameLabel;
@property (nonatomic, retain) UILabel *timeLabel;
@property (nonatomic, retain) STCandyBarView *timeProgressView;
@property (nonatomic, retain) NSLayoutConstraint *timeProgressWidthConstraint;
@property (nonatomic, retain) STUsageItem *usageItem;

- (void).cxx_destruct;
- (id)addAllowanceButton;
- (void)addAllowanceButtonPressed:(id)arg1;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)itemIconView;
- (id)itemNameLabel;
- (void)setAddAllowanceButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItemIconView:(id)arg1;
- (void)setItemNameLabel:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setTimeProgressView:(id)arg1;
- (void)setTimeProgressWidthConstraint:(id)arg1;
- (void)setUsageItem:(id)arg1;
- (void)setValue:(id)arg1;
- (id)timeLabel;
- (id)timeProgressView;
- (id)timeProgressWidthConstraint;
- (id)usageItem;

@end
