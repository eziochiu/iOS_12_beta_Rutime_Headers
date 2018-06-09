/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPublishCloudSharedAssetsJob : PLCloudSharingJob {
    NSString * _batchCommentText;
    bool  _isNewAlbum;
    NSArray * _originalAssetUUIDs;
    NSString * _publishAlbumCloudGUID;
    NSArray * _stillImageOnlyAssetUUIDs;
    NSDictionary * _trimmedVideoPathInfo;
}

@property (nonatomic, retain) NSString *batchCommentText;
@property (nonatomic) bool isNewAlbum;
@property (nonatomic, retain) NSArray *originalAssetUUIDs;
@property (nonatomic, retain) NSString *publishAlbumCloudGUID;
@property (nonatomic, retain) NSArray *stillImageOnlyAssetUUIDs;
@property (nonatomic, retain) NSDictionary *trimmedVideoPathInfo;

+ (void)publishBatchOfOriginalAssets:(id)arg1 toSharedAlbum:(id)arg2 withAssetsSharingInfos:(id)arg3 trimmedVideoPathInfo:(id)arg4 isNewAlbum:(bool)arg5 batchCommentText:(id)arg6;

- (id)batchCommentText;
- (long long)daemonOperation;
- (void)dealloc;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (void)executeDaemonOperation;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (bool)isNewAlbum;
- (id)originalAssetUUIDs;
- (id)publishAlbumCloudGUID;
- (void)run;
- (void)runDaemonSide;
- (void)setBatchCommentText:(id)arg1;
- (void)setIsNewAlbum:(bool)arg1;
- (void)setOriginalAssetUUIDs:(id)arg1;
- (void)setPublishAlbumCloudGUID:(id)arg1;
- (void)setStillImageOnlyAssetUUIDs:(id)arg1;
- (void)setTrimmedVideoPathInfo:(id)arg1;
- (bool)shouldArchiveXPCToDisk;
- (id)stillImageOnlyAssetUUIDs;
- (id)trimmedVideoPathInfo;

@end
