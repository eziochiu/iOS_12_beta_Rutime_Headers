/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSoftwareUpdateFetchCell : UITableViewCell <HUCellProtocol> {
    UIActivityIndicatorView * _checkingForUpdateSpinner;
    HFItem * _item;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    UIStackView * _titleSpinnerStackView;
}

@property (nonatomic, retain) UIActivityIndicatorView *checkingForUpdateSpinner;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIStackView *titleSpinnerStackView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)checkingForUpdateSpinner;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (void)setCheckingForUpdateSpinner:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleSpinnerStackView:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)titleSpinnerStackView;
- (void)updateUIWithAnimation:(bool)arg1;

@end
