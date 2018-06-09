/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMediaLibraryInterface : NSObject <SKUILibraryInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)_AVTypesForMediaItem:(id)arg1;
- (long long)_availabilityForMediaItem:(id)arg1;
- (id)_newDefaultQuery;
- (void)_restrictQueryToLocalContent:(id)arg1;
- (id)_storePlatformKindForMediaItem:(id)arg1;
- (void)enumerateStatesForLibraryItems:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)exposedPlatformItemKinds;
- (bool)isItemLocalAudiobook:(id)arg1;
- (bool)performActionForLibraryItem:(id)arg1;
- (void)removeMediaItemsForLibraryItems:(id)arg1;
- (id)stateForLibraryItem:(id)arg1;

@end
