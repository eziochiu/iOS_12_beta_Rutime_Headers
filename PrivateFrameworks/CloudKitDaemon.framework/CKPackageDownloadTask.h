/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKPackageDownloadTask : NSObject <CKDCancelling> {
    CKDMMCSRequestOptions * _MMCSRequestOptions;
    CKDCancelTokenGroup * _cancelTokens;
    NSError * _error;
    NSObject<OS_dispatch_group> * _group;
    id  _itemIndices;
    CKAsset * _manifestAsset;
    CKPackage * _package;
    CKDProgressTracker * _progressTracker;
    NSArray * _sectionAssets;
    NSIndexSet * _sectionIndices;
}

@property (nonatomic, retain) CKDMMCSRequestOptions *MMCSRequestOptions;
@property (nonatomic, retain) CKDCancelTokenGroup *cancelTokens;
@property (retain) NSError *error;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *group;
@property (nonatomic, retain) id itemIndices;
@property (nonatomic, retain) CKAsset *manifestAsset;
@property (nonatomic, readonly) CKPackage *package;
@property (nonatomic, retain) CKDProgressTracker *progressTracker;
@property (nonatomic, retain) NSArray *sectionAssets;
@property (nonatomic, retain) NSIndexSet *sectionIndices;

- (void).cxx_destruct;
- (id)MMCSRequestOptions;
- (void)cancel;
- (id)cancelTokens;
- (id)error;
- (id)group;
- (id)initWithPackage:(id)arg1 trackProgress:(bool)arg2;
- (id)itemIndices;
- (id)manifestAsset;
- (id)package;
- (id)progressTracker;
- (id)sectionAssets;
- (id)sectionIndices;
- (void)setCancelTokens:(id)arg1;
- (void)setError:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setItemIndices:(id)arg1;
- (void)setMMCSRequestOptions:(id)arg1;
- (void)setManifestAsset:(id)arg1;
- (void)setProgressTracker:(id)arg1;
- (void)setSectionAssets:(id)arg1;
- (void)setSectionIndices:(id)arg1;

@end
