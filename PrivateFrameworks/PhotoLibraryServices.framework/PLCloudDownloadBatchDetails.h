/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudDownloadBatchDetails : NSObject {
    NSArray * _cmmUUIDsToNotify;
    NSArray * _flippedPlaceholderAssetUUIDs;
    bool  _hasResourceChanges;
    long long  _numberOfPhotos;
    long long  _numberOfVideos;
}

@property (nonatomic, copy) NSArray *cmmUUIDsToNotify;
@property (nonatomic, copy) NSArray *flippedPlaceholderAssetUUIDs;
@property (nonatomic) bool hasResourceChanges;
@property (nonatomic) long long numberOfPhotos;
@property (nonatomic) long long numberOfVideos;

- (void).cxx_destruct;
- (id)cmmUUIDsToNotify;
- (id)flippedPlaceholderAssetUUIDs;
- (bool)hasResourceChanges;
- (long long)numberOfPhotos;
- (long long)numberOfVideos;
- (void)setCmmUUIDsToNotify:(id)arg1;
- (void)setFlippedPlaceholderAssetUUIDs:(id)arg1;
- (void)setHasResourceChanges:(bool)arg1;
- (void)setNumberOfPhotos:(long long)arg1;
- (void)setNumberOfVideos:(long long)arg1;
- (void)unionBatchDetails:(id)arg1;

@end
