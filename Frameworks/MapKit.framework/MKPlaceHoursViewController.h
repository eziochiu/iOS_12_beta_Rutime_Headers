/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceHoursViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, MKStackingViewControllerFixedHeightAware, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    <_MKInfoCardAnalyticsDelegate> * _analyticsDelegate;
    NSArray * _completeHours;
    NSString * _currentOpenHoursString;
    NSString * _currentOpenStateString;
    NSMutableDictionary * _formattedData;
    MKPlaceSectionHeaderView * _headerView;
    bool  _isExpanded;
    _MKLocalizedHoursBuilder * _localizedHoursBuilder;
    MKMapItem * _mapItem;
    bool  _resizableViewsDisabled;
}

@property (nonatomic) <_MKInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (nonatomic, readonly) NSArray *completeHours;
@property (nonatomic, readonly) NSString *currentOpenHoursString;
@property (nonatomic, readonly) NSString *currentOpenStateString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _MKLocalizedHoursBuilder *localizedHoursBuilder;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) bool resizableViewsDisabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSTimeZone *timeZone;

+ (id)placeHoursWithMapItem:(id)arg1;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setExpanded:(bool)arg1;
- (bool)_shouldCollapseFurtherAndColorTopString;
- (bool)_shouldOnlyShowExpanded;
- (void)_toggleShowAllHours;
- (void)_updateHoursAnimated:(bool)arg1;
- (id)analyticsDelegate;
- (void)calculateWidthsForData:(id)arg1;
- (id)completeHours;
- (id)currentOpenHoursString;
- (id)currentOpenStateString;
- (id)formattedData;
- (id)infoCardChildPossibleActions;
- (id)initWithMapItem:(id)arg1;
- (id)localizedHoursBuilder;
- (id)mapItem;
- (bool)resizableViewsDisabled;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setResizableViewsDisabled:(bool)arg1;
- (id)timeZone;
- (id)titleString;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
