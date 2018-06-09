/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAActivityStream : SABaseCommand <SAAceSerializable, SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSArray *activities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *taskType;

+ (id)activityStream;
+ (id)activityStreamWithDictionary:(id)arg1 context:(id)arg2;

- (id)activities;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setActivities:(id)arg1;
- (void)setTaskType:(id)arg1;
- (id)taskType;

@end
