/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MBLibraryClipsLoader : MBClipsLoader <PHPhotoLibraryChangeObserver> {
    PHAssetCollection * _assetCollection;
    NSSet * _assetURLs;
    PHFetchResult * _fetchResult;
    NSMutableDictionary * _identifierURLsToClipsMap;
    NSSet * _insertedAssetURLs;
    NSRecursiveLock * _updateLock;
}

@property (nonatomic, retain) PHAssetCollection *assetCollection;
@property (retain) NSSet *assetURLs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PHFetchResult *fetchResult;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *identifierURLsToClipsMap;
@property (retain) NSSet *insertedAssetURLs;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSRecursiveLock *updateLock;

- (void).cxx_destruct;
- (void)addClipWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)assetCollection;
- (id)assetURLs;
- (id)clips;
- (long long)countForAllClips;
- (void)dealloc;
- (id)fetchAssetURLs;
- (id)fetchAssets;
- (id)fetchResult;
- (id)identifierURLsToClipsMap;
- (id)initWithAssetCollection:(id)arg1 showOnlyFavorites:(bool)arg2;
- (id)insertedAssetURLs;
- (void)load;
- (void)loadClipsFromURLs:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)setAssetCollection:(id)arg1;
- (void)setAssetURLs:(id)arg1;
- (void)setFetchResult:(id)arg1;
- (void)setIdentifierURLsToClipsMap:(id)arg1;
- (void)setInsertedAssetURLs:(id)arg1;
- (void)setUpdateLock:(id)arg1;
- (id)updateLock;

@end
