/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STUsageSummaryHeaderView : UITableViewHeaderFooterView <PSHeaderFooterView> {
    UILabel * _deviceNameLabel;
    UISegmentedControl * _segmentedControl;
    STSingleLineHeaderView * _singleLineHeaderView;
    PSSpecifier * _specifier;
}

@property (nonatomic, readonly) UILabel *deviceNameLabel;
@property (nonatomic, readonly) UISegmentedControl *segmentedControl;
@property (nonatomic, readonly) STSingleLineHeaderView *singleLineHeaderView;
@property (nonatomic, retain) PSSpecifier *specifier;

- (void).cxx_destruct;
- (id)deviceNameLabel;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)reloadSpecifier;
- (id)segmentedControl;
- (void)selectedSegmentIndexChanged:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (id)singleLineHeaderView;
- (id)specifier;

@end
