/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHSmartAlbum : PHAssetCollection

+ (id)fetchType;
+ (id)managedEntityName;

- (bool)collectionHasFixedOrder;

@end
