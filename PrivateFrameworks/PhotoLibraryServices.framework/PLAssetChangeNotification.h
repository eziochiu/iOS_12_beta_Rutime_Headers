/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetChangeNotification : PLChangeNotification {
    NSSet * _updatedAssets;
}

@property (nonatomic, copy) NSSet *updatedAssets;

+ (id)notificationWithChangedAssets:(id)arg1;

- (id)_init;
- (id)_initWithChangedObjects:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)name;
- (id)object;
- (void)setUpdatedAssets:(id)arg1;
- (id)updatedAssets;
- (id)userInfo;

@end
