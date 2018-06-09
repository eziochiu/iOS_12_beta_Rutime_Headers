/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKNearestStationCell : UITableViewCell {
    UIImageView * _stationImageView;
    MKTransitInfoLabelView * _stationInfoLabel;
    NSLayoutConstraint * _stationLabelToImageViewConstraint;
    NSLayoutConstraint * _stationLabelToLeadingEdgeConstraint;
    NSLayoutConstraint * _stationLabelToTopConstraint;
    _MKUILabel * _stationTitleLabel;
}

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (void)configureWithNearestStation:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
