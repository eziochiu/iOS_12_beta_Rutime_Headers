/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSiriVocabularyController : NSObject <PHPhotoLibraryChangeObserver> {
    PHFetchResult * _albumFetchResult;
    bool  _needsVocabularyUpdate;
    PHFetchResult * _peopleFetchResult;
    NSObject<OS_dispatch_queue> * _processingQueue;
    PHFetchResult * _smartAlbumFetchResult;
}

@property (nonatomic, retain) PHFetchResult *albumFetchResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsVocabularyUpdate;
@property (nonatomic, retain) PHFetchResult *peopleFetchResult;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, retain) PHFetchResult *smartAlbumFetchResult;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_localizedTitlesForAssetCollectionFetchResult:(id)arg1;
- (void)_onQueueUpdateAlbumVocabulary;
- (void)_onQueueUpdatePeopleVocabulary;
- (id)albumFetchResult;
- (void)dealloc;
- (id)init;
- (bool)needsVocabularyUpdate;
- (id)peopleFetchResult;
- (void)photoLibraryDidChange:(id)arg1;
- (id)processingQueue;
- (void)setAlbumFetchResult:(id)arg1;
- (void)setNeedsVocabularyUpdate:(bool)arg1;
- (void)setPeopleFetchResult:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)setSmartAlbumFetchResult:(id)arg1;
- (id)smartAlbumFetchResult;
- (void)updateVocabulary;

@end
