/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMomentShare : PHAssetCollection <PXMediaTypeAggregating> {
    unsigned long long  _assetCount;
    NSDate * _creationDate;
    NSDate * _expiryDate;
    short  _mode;
    unsigned long long  _photosCount;
    PHMomentSharePreview * _preview;
    NSData * _previewData;
    NSURL * _shareURL;
    bool  _shouldIgnoreBudgets;
    bool  _shouldNotifyOnUploadCompletion;
    unsigned short  _status;
    NSData * _thumbnailImageData;
    unsigned long long  _uploadedPhotosCount;
    unsigned long long  _uploadedVideosCount;
    unsigned long long  _videosCount;
}

@property (nonatomic, readonly) long long aggregateMediaType;
@property (nonatomic, readonly) unsigned long long assetCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *expiryDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) short mode;
@property (nonatomic, readonly) unsigned long long photosCount;
@property (nonatomic, readonly) PHMomentSharePreview *preview;
@property (nonatomic, readonly) NSData *previewData;
@property (nonatomic, readonly) NSURL *shareURL;
@property (nonatomic, readonly) bool shouldIgnoreBudgets;
@property (nonatomic, readonly) bool shouldNotifyOnUploadCompletion;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) unsigned short status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSData *thumbnailImageData;
@property (nonatomic, readonly) unsigned long long uploadedPhotosCount;
@property (nonatomic, readonly) unsigned long long uploadedVideosCount;
@property (nonatomic, readonly) unsigned long long videosCount;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_phErrorFromError:(id)arg1;
+ (id)entityKeyMap;
+ (void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)fetchMomentSharesOverlappingAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)invitedMomentSharesExpiringInDays:(unsigned long long)arg1;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (void)acceptShareWithCompletion:(id /* block */)arg1;
- (unsigned long long)assetCount;
- (Class)changeRequestClass;
- (id)creationDate;
- (id)expiryDate;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (short)mode;
- (unsigned long long)photosCount;
- (id)preview;
- (id)previewData;
- (void)publishWithCompletionHandler:(id /* block */)arg1;
- (id)shareURL;
- (bool)shouldIgnoreBudgets;
- (bool)shouldNotifyOnUploadCompletion;
- (bool)shouldPromptUserToIgnoreBudgets;
- (unsigned short)status;
- (id)thumbnailImageData;
- (unsigned long long)uploadedPhotosCount;
- (unsigned long long)uploadedVideosCount;
- (unsigned long long)videosCount;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (long long)aggregateMediaType;

@end
