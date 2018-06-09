/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFPresenceConditionItem : HFItem <HFConditionItem> {
    HFPresenceCondition * _condition;
    HMHome * _home;
}

@property (nonatomic, retain) HFPresenceCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)condition;
- (id)home;
- (id)init;
- (id)initWithCondition:(id)arg1 home:(id)arg2;
- (void)setCondition:(id)arg1;

@end
