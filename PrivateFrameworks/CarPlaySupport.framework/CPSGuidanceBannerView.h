/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSGuidanceBannerView : CPSBannerView {
    SBUIStarkBannerViewButton * _actionButton;
    UIImageView * _applicationIconImageView;
    CPSAbridgableLabel * _guidanceDetailTextLabel;
    UIImageView * _guidanceImageView;
    CPSAbridgableLabel * _guidanceTextLabel;
}

@property (nonatomic, retain) SBUIStarkBannerViewButton *actionButton;
@property (nonatomic, retain) UIImageView *applicationIconImageView;
@property (nonatomic, retain) CPSAbridgableLabel *guidanceDetailTextLabel;
@property (nonatomic, retain) UIImageView *guidanceImageView;
@property (nonatomic, retain) CPSAbridgableLabel *guidanceTextLabel;

- (void).cxx_destruct;
- (id)actionButton;
- (id)applicationIconImageView;
- (id)guidanceDetailTextLabel;
- (id)guidanceImageView;
- (id)guidanceTextLabel;
- (id)initWithContext:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setApplicationIconImageView:(id)arg1;
- (void)setGuidanceDetailTextLabel:(id)arg1;
- (void)setGuidanceImageView:(id)arg1;
- (void)setGuidanceTextLabel:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBannerWithBannerItem:(id)arg1;

@end
