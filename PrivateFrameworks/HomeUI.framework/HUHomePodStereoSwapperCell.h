/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUHomePodStereoSwapperCell : UITableViewCell {
    <HUHomePodStereoSwapperCellDelegate> * _delegate;
    HUHomePodDetailView * _leftHomePod;
    HUHomePodDetailView * _rightHomePod;
    UIButton * _swapButton;
}

@property (nonatomic) <HUHomePodStereoSwapperCellDelegate> *delegate;
@property (nonatomic, readonly) HUHomePodDetailView *leftHomePod;
@property (nonatomic, readonly) HUHomePodDetailView *rightHomePod;
@property (nonatomic, readonly) UIButton *swapButton;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_swap;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)leftHomePod;
- (id)rightHomePod;
- (void)setDelegate:(id)arg1;
- (id)swapButton;

@end
