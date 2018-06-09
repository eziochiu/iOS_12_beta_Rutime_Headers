/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSNavigationETAView : UIView <CPSNavigationDisplaying> {
    CPSRouteEstimatesView * _routeEstimatesView;
    CPTrip * _trip;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPSRouteEstimatesView *routeEstimatesView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CPTrip *trip;

- (void).cxx_destruct;
- (id)initWithTrip:(id)arg1;
- (id)routeEstimatesView;
- (void)showManeuvers:(id)arg1;
- (id)trip;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;

@end
