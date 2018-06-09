/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUHomePodDetailView : UIButton {
    <HUHomePodDetailViewDelegate> * _delegate;
    bool  _isAnimatingPop;
    unsigned long long  _role;
    HUMonogramView * _unitBadgeLabel;
    UIView * _unitImageView;
    UILabel * _unitNameLabel;
}

@property (nonatomic) <HUHomePodDetailViewDelegate> *delegate;
@property (nonatomic) bool isAnimatingPop;
@property (nonatomic, readonly) unsigned long long role;
@property (nonatomic, readonly) HUMonogramView *unitBadgeLabel;
@property (nonatomic, readonly) UIView *unitImageView;
@property (nonatomic, copy) <HFStringGenerator> *unitName;
@property (nonatomic, readonly) UILabel *unitNameLabel;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_speakerTapped;
- (void)_updateImagesForRole;
- (id)delegate;
- (id)initWithRole:(unsigned long long)arg1;
- (bool)isAnimatingPop;
- (unsigned long long)role;
- (void)setDelegate:(id)arg1;
- (void)setIsAnimatingPop:(bool)arg1;
- (void)setUnitName:(id)arg1;
- (id)unitBadgeLabel;
- (id)unitImageView;
- (id)unitName;
- (id)unitNameLabel;

@end
