/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchAddItemToMapCache : SADomainCommand

@property (nonatomic, retain) SALocalSearchMapItem *mapItem;

+ (id)addItemToMapCache;
+ (id)addItemToMapCacheWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)mapItem;
- (bool)requiresResponse;
- (void)setMapItem:(id)arg1;

@end
