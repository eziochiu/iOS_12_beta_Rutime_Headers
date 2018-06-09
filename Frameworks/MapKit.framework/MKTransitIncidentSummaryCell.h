/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitIncidentSummaryCell : MKTableViewCell {
    UIImageView * _iconImageView;
    NSDate * _startDate;
    _MKUILabel * _startedLabel;
    NSLayoutConstraint * _startedToSummaryConstraint;
    _MKUILabel * _summaryLabel;
    NSLayoutConstraint * _summaryToTitleConstraint;
    _MKUILabel * _titleLabel;
    NSLayoutConstraint * _titleToTopConstraint;
}

@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (void)_updateStartLabel;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)icon;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setConstraints;
- (void)setIcon:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)startDate;
- (id)summary;
- (id)title;

@end
