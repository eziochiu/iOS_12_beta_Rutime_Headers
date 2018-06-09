/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSNavigator : NSObject <CARNavigationOwnershipManagerDelegate, CPNavigationSessionProviding> {
    bool  _completed;
    NSHashTable * _displayDelegates;
    <CARNavigationOwnershipManagerDelegate> * _navigationOwnershipDelegate;
    CARNavigationOwnershipManager * _navigationOwnershipManager;
    CPTrip * _trip;
}

@property (getter=isCompleted, nonatomic) bool completed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSHashTable *displayDelegates;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CARNavigationOwnershipManagerDelegate> *navigationOwnershipDelegate;
@property (nonatomic, retain) CARNavigationOwnershipManager *navigationOwnershipManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CPTrip *trip;

- (void).cxx_destruct;
- (void)addDisplayDelegate:(id)arg1;
- (void)cancelTrip;
- (void)dealloc;
- (id)displayDelegates;
- (void)finishTrip;
- (id)initWithIdentifier:(id)arg1;
- (bool)isCompleted;
- (void)navigationOwnershipChangedToOwner:(unsigned long long)arg1;
- (id)navigationOwnershipDelegate;
- (id)navigationOwnershipManager;
- (void)pauseTripForReason:(unsigned long long)arg1;
- (void)removeDisplayDelegate:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setDisplayDelegates:(id)arg1;
- (void)setNavigationOwnershipDelegate:(id)arg1;
- (void)setNavigationOwnershipManager:(id)arg1;
- (id)trip;
- (void)updateManeuvers:(id)arg1;
- (void)updateTravelEstimates:(id)arg1 forManeuver:(id)arg2;

@end
