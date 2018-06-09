/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAKnowledgeGetValuesForKeysResponse : SABaseCommand <SAAceSerializable, SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *entries;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)getValuesForKeysResponse;
+ (id)getValuesForKeysResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)entries;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setEntries:(id)arg1;

@end
