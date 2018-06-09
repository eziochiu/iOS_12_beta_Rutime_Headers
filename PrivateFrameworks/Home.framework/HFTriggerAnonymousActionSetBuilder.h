/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTriggerAnonymousActionSetBuilder : HFItemBuilder <HFActionSetBuilderProtocol> {
    HFMutableSetDiff * _actionBuilders;
    NSArray * _actions;
    HMTrigger * _containingTrigger;
}

@property (nonatomic, retain) HFMutableSetDiff *actionBuilders;
@property (nonatomic, readonly) NSArray *actions;
@property (getter=isAffectedByEndEvents, nonatomic, readonly) bool affectedByEndEvents;
@property (nonatomic, retain) HMTrigger *containingTrigger;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool requiresDeviceUnlock;
@property (readonly) Class superclass;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)_lazilyUpdateActions;
- (id)actionBuilders;
- (id)actionSet;
- (id)actions;
- (void)addAction:(id)arg1;
- (id)commitItem;
- (id)containingTrigger;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (bool)isAffectedByEndEvents;
- (void)removeAction:(id)arg1;
- (void)removeAllActions;
- (bool)requiresDeviceUnlock;
- (void)setActionBuilders:(id)arg1;
- (void)setActionSet:(id)arg1;
- (void)setContainingTrigger:(id)arg1;
- (void)updateAction:(id)arg1;

@end
