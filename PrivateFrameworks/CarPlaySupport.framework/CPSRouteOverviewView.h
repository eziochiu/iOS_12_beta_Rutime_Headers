/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSRouteOverviewView : UIView {
    CPTravelEstimates * _currentTravelEstimates;
    UILabel * _destinationAddress;
    UILabel * _destinationName;
    CPSRouteEstimatesView * _estimatesView;
    NSString * _routeNote;
    UILabel * _routeNoteLabel;
    CPTrip * _trip;
}

@property (nonatomic, retain) CPTravelEstimates *currentTravelEstimates;
@property (nonatomic, readonly) UILabel *destinationAddress;
@property (nonatomic, readonly) UILabel *destinationName;
@property (nonatomic, readonly) CPSRouteEstimatesView *estimatesView;
@property (nonatomic, copy) NSString *routeNote;
@property (nonatomic, readonly) UILabel *routeNoteLabel;
@property (nonatomic, readonly) CPTrip *trip;

+ (id)_boldMultilineLabelWithText:(id)arg1 fontSize:(double)arg2 color:(id)arg3;
+ (id)_multilineLabelWithText:(id)arg1 fontSize:(double)arg2 color:(id)arg3;
+ (id)_nameForMapItem:(id)arg1;
+ (id)_shortenedAddressForAddress:(id)arg1;

- (void).cxx_destruct;
- (id)currentTravelEstimates;
- (id)destinationAddress;
- (id)destinationName;
- (id)estimatesView;
- (id)initWithTrip:(id)arg1;
- (id)routeNote;
- (id)routeNoteLabel;
- (void)setCurrentTravelEstimates:(id)arg1;
- (void)setRouteNote:(id)arg1;
- (id)trip;

@end
