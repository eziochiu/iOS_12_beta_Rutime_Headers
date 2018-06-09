/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupUpdateIntentSlot : SABaseCommand <SAIntentGroupSetMapLocation, SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *intentSlotKeyPath;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *intentSlotResolutionResult;
@property (nonatomic, copy) NSNumber *intentSlotValueIndex;
@property (nonatomic, copy) NSString *intentTypeName;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *location;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)updateIntentSlot;
+ (id)updateIntentSlotWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intentSlotKeyPath;
- (id)intentSlotResolutionResult;
- (id)intentSlotValueIndex;
- (id)intentTypeName;
- (id)location;
- (bool)requiresResponse;
- (void)setIntentSlotKeyPath:(id)arg1;
- (void)setIntentSlotResolutionResult:(id)arg1;
- (void)setIntentSlotValueIndex:(id)arg1;
- (void)setIntentTypeName:(id)arg1;
- (void)setLocation:(id)arg1;

@end
