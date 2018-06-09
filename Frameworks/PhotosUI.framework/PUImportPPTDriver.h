/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportPPTDriver : NSObject <PUImportAssetsDataSourceManagerObserver, PUImportMediaProviderNotificationsReceiver> {
    PUImportPPTImportSource * _currentImportSource;
    PUImportAssetsDataSourceManager * _dataSourceManager;
    double  _endTime;
    NSMutableDictionary * _extraResults;
    bool  _hasSeenAbsolulteLastThumbnailMarker;
    PUImportController * _importController;
    id /* block */  _insertDatasourceReply;
    bool  _loadingContentStarted;
    PUImportMediaProvider * _mediaProvider;
    NSDictionary * _options;
    double  _startTime;
    PUTabbedLibraryViewController * _tabbedLibraryViewController;
    NSDictionary * _testOptions;
    id /* block */  _thumbnailTestReply;
}

@property (nonatomic, readonly) NSDictionary *additionalResults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *options;
@property (readonly) Class superclass;
@property PUTabbedLibraryViewController *tabbedLibraryViewController;
@property (copy) NSDictionary *testOptions;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (double)_contentLoadingCheckInterval;
- (void)_removeCurrentImportSourceIfNecessary;
- (void)_updateLoadingContentState;
- (id)additionalResults;
- (id)importController;
- (id)importViewController;
- (id)init;
- (id)mediaProvider;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)options;
- (void)ppt_insertImportDataSourceWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)ppt_mediaProviderDidProcessAsset:(id)arg1;
- (void)ppt_performDeleteWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)ppt_performThumbnailWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)ppt_removeImportDataSourceWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setOptions:(id)arg1;
- (void)setTabbedLibraryViewController:(id)arg1;
- (void)setTestOptions:(id)arg1;
- (void)signalInsertDatasourceReply:(bool)arg1;
- (void)signalThumbnailTestReply:(bool)arg1;
- (id)tabbedLibraryViewController;
- (id)testOptions;

@end
