/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfGeoFence : SADomainObject

@property (nonatomic, retain) SAPersonAttribute *friend;
@property (nonatomic, copy) NSString *geoFenceTrigger;
@property (nonatomic, retain) SALocation *location;

+ (id)geoFence;
+ (id)geoFenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)friend;
- (id)geoFenceTrigger;
- (id)groupIdentifier;
- (id)location;
- (void)setFriend:(id)arg1;
- (void)setGeoFenceTrigger:(id)arg1;
- (void)setLocation:(id)arg1;

@end
