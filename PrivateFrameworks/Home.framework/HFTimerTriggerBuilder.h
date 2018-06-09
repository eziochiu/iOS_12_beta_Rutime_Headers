/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTimerTriggerBuilder : HFTriggerBuilder {
    HFConcreteTimeTriggerBuilder * _concreteTriggerBuilder;
    unsigned long long  _preferredHomeKitObjectType;
}

@property (nonatomic, retain) HFConcreteTimeTriggerBuilder *concreteTriggerBuilder;
@property (nonatomic, retain) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;
@property (nonatomic) unsigned long long preferredHomeKitObjectType;
@property (nonatomic, copy) NSArray *recurrences;
@property (nonatomic, copy) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (void)_createConcreteTriggerBuilder;
- (bool)_currentStateRequiresEventBasedTimeTriggers;
- (id)_performValidation;
- (bool)_supportsEventBasedTimeTriggers;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)concreteTriggerBuilder;
- (id)eventBuilder;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (unsigned long long)preferredHomeKitObjectType;
- (id)recurrences;
- (void)setConcreteTriggerBuilder:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEventBuilder:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPreferredHomeKitObjectType:(unsigned long long)arg1;
- (void)setRecurrences:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (bool)supportsConditions;
- (bool)supportsEndEvents;
- (id)timeZone;

@end
