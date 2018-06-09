/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBServiceFacilityServer : BSBaseXPCServer <FBSServiceFacilityManaging> {
    NSMutableSet * _completedMilestones;
    NSMutableDictionary * _facilitiesByIdentifier;
    NSMutableSet * _pendingConnects;
    NSMutableDictionary * _suspendedFacilitiesByIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_areFacilityPrerequisitesSatisfied:(id)arg1;
- (void)_evaluateSuspendedFacilities;
- (void)_evaluateSuspendedFacility:(id)arg1;
- (void)_handleConnect:(id)arg1 forClient:(id)arg2 facilityID:(id)arg3;
- (void)addFacility:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)noteMilestoneReached:(id)arg1;
- (bool)ping;
- (Class)queue_classForNewClientConnection:(id)arg1;
- (void)queue_clientAdded:(id)arg1;
- (void)queue_clientRemoved:(id)arg1;
- (void)queue_handleMessage:(id)arg1 client:(id)arg2;
- (void)removeFacility:(id)arg1;

@end
