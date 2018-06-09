/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAlarmUpdate : SADomainCommand <SAAlarmAlarmAction>

@property (nonatomic, copy) NSArray *addedFrequency;
@property (nonatomic, copy) NSURL *alarmId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *hour;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSNumber *minute;
@property (nonatomic, copy) NSArray *modifications;
@property (nonatomic, copy) NSArray *removedFrequency;
@property (readonly) Class superclass;

+ (id)update;
+ (id)updateWithDictionary:(id)arg1 context:(id)arg2;

- (id)addedFrequency;
- (id)alarmId;
- (id)enabled;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hour;
- (id)label;
- (id)minute;
- (id)modifications;
- (id)removedFrequency;
- (bool)requiresResponse;
- (void)setAddedFrequency:(id)arg1;
- (void)setAlarmId:(id)arg1;
- (void)setEnabled:(id)arg1;
- (void)setHour:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMinute:(id)arg1;
- (void)setModifications:(id)arg1;
- (void)setRemovedFrequency:(id)arg1;

@end
