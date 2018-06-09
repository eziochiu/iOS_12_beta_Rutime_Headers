/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACFPEXResponse : SABaseCommand <SAAceSerializable, SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *pexItems;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)response;
+ (id)responseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)pexItems;
- (bool)requiresResponse;
- (void)setPexItems:(id)arg1;

@end
