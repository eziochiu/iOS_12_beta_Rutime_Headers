/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetSessionObjects : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *objects;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)setSessionObjects;
+ (id)setSessionObjectsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)objects;
- (bool)requiresResponse;
- (void)setObjects:(id)arg1;

@end
