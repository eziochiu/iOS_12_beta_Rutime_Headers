/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STBarView : UIView {
    NSArray * _sectionHeightConstraints;
    NSArray * _sectionViews;
    bool  _selected;
    NSDate * _startDate;
    NSNumber * _totalUsage;
    NSArray * _usageItems;
}

@property (nonatomic, copy) NSArray *sectionHeightConstraints;
@property (nonatomic, copy) NSArray *sectionViews;
@property (nonatomic) bool selected;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (nonatomic, copy) NSNumber *totalUsage;
@property (nonatomic, copy) NSArray *usageItems;

- (void).cxx_destruct;
- (id)initWithUsageItems:(id)arg1 startDate:(id)arg2;
- (id)sectionHeightConstraints;
- (id)sectionViews;
- (bool)selected;
- (void)setSectionHeightConstraints:(id)arg1;
- (void)setSectionViews:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTotalUsage:(id)arg1;
- (void)setUpSectionHeightConstraints;
- (void)setUpSections;
- (void)setUsageItems:(id)arg1;
- (id)startDate;
- (id)totalUsage;
- (id)usageItems;

@end
