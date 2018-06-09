/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitLineIncidentsViewController : _MKTableViewController <MKDynamicTransitUIContainer, MKStackingViewControllerPreferredSizeUse> {
    MKTransitItemIncidentsController * _incidentsController;
    <MKTransitLineIncidentsViewControllerDelegate> * _incidentsDelegate;
    <GEOTransitLineItem> * _lineItem;
    NSDate * _referenceDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MKTransitLineIncidentsViewControllerDelegate> *incidentsDelegate;
@property (nonatomic, readonly) <GEOTransitLineItem> *lineItem;
@property (nonatomic, readonly, copy) NSDate *referenceDate;
@property (nonatomic, readonly) bool requiresPreferredContentSizeInStackingView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissTransitIncidents;
- (id)_headerView;
- (id)_incidentCellForRow:(long long)arg1;
- (id)_incidents;
- (void)_moreIncidentDetailsSelected;
- (id)incidentsDelegate;
- (id)initWithLineItem:(id)arg1;
- (id)lineItem;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)referenceDate;
- (bool)requiresPreferredContentSizeInStackingView;
- (void)setIncidentsDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)transitUIReferenceTimeUpdated:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
