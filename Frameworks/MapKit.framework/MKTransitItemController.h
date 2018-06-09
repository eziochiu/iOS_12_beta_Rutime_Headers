/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitItemController : NSObject {
    NSMapTable * _containers;
    NSMutableDictionary * _lineItemLookups;
    NSMutableDictionary * _mapItemLookups;
    NSDate * _referenceDate;
    NSTimer * _updateTimer;
}

@property (nonatomic, readonly) NSDate *referenceDate;

+ (id)sharedController;

- (void).cxx_destruct;
- (bool)_needsUpdateReferenceDate;
- (void)_scheduleReferenceDateUpdate;
- (void)_timerFired;
- (void)_updateReferenceDate;
- (void)addDynamicTransitUIContainer:(id)arg1;
- (id)referenceDate;
- (void)removeDynamicTransitUIContainer:(id)arg1;
- (bool)updateTransitLineItemIfNeeded:(id)arg1 traits:(id)arg2 completion:(id /* block */)arg3;
- (bool)updateTransitMapItemIfNeeded:(id)arg1 updateForIncidents:(bool)arg2 traits:(id)arg3 completion:(id /* block */)arg4;

@end
