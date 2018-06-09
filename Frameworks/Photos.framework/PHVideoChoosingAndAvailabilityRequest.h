/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHVideoChoosingAndAvailabilityRequest : PHAvailabilityRequest {
    PHVideoRequestBehaviorSpec * _behaviorSpec;
    PHResourceAvailabilityDataStoreManager * _dataStoreManager;
    <PHVideoChoosingAndAvailabilityRequestDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    bool  _wantsProgress;
}

@property (nonatomic, readonly) PHVideoRequestBehaviorSpec *behaviorSpec;
@property (nonatomic) <PHVideoChoosingAndAvailabilityRequestDelegate> *delegate;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic) bool wantsProgress;

- (void).cxx_destruct;
- (id)_chooseVideoResourceWithManagedObjectContext:(id)arg1 canDownload:(bool*)arg2;
- (void)_cplDownloadStatusNotification:(id)arg1;
- (void)_resourceURLReceivedNotification:(id)arg1;
- (short)_resourceVersionFromVideoRequestVersion:(long long)arg1 assetHasAdjustments:(bool)arg2;
- (id)_videoChoosingResultsMatchingResourceVersion:(short)arg1 managedObjectContext:(id)arg2;
- (unsigned int)_videoQualityLevelForRequest;
- (id)behaviorSpec;
- (void)cancel;
- (id)delegate;
- (id)initWithAssetObjectID:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 behaviorSpec:(id)arg3;
- (id)initWithPlistDictionary:(id)arg1;
- (id)plistDictionary;
- (void)runDaemonSide;
- (void)setDelegate:(id)arg1;
- (void)setWantsProgress:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (bool)wantsProgress;

@end
