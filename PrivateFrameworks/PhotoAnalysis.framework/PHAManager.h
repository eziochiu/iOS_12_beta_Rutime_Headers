/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAManager : NSObject <PHAServiceOperationHandling> {
    PHAAssetResourceDataLoader * _dataLoader;
    PHAExecutive * _executive;
    PHAGraphManager * _graphManager;
    PHAJobCoordinator * _jobCoordinator;
    NSURL * _libraryURL;
    PHAMonitoring * _monitoring;
    NSDictionary * _photoAnalysisWorkersByType;
    PHPhotoLibrary * _photoLibrary;
}

@property (readonly) PHAGraphManager *graphManager;
@property (readonly) PHAJobCoordinator *jobCoordinator;
@property (retain) NSURL *libraryURL;
@property (retain) NSDictionary *photoAnalysisWorkersByType;
@property (retain) PHPhotoLibrary *photoLibrary;
@property (getter=isQuiescent, readonly) bool quiescent;

+ (id)allWorkerClasses;
+ (void)enumerateWorkerClassesUsingBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)autoloopServiceWorker;
- (void)backgroundActivityDidBegin;
- (void)checkForQuiescence;
- (id)description;
- (void)dumpAnalysisStatusWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)enumerateWorkersUsingBlock:(id /* block */)arg1;
- (id)faceClassificationServiceWorker;
- (id)faceProcessingServiceWorker;
- (id)graphManager;
- (id)graphServiceWorker;
- (void)handleOperation:(id)arg1;
- (id)init;
- (id)initWithPhotoLibraryURL:(id)arg1 executive:(id)arg2;
- (bool)isInitialSyncActive;
- (bool)isQuiescent;
- (bool)isTurboMode;
- (id)jobCoordinator;
- (id)libraryURL;
- (id)monitoring;
- (id)photoAnalysisWorkersByType;
- (id)photoLibrary;
- (bool)photosIsConnected;
- (id)sceneClassificationServiceWorker;
- (void)setLibraryURL:(id)arg1;
- (void)setPhotoAnalysisWorkersByType:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setTurboMode;
- (void)shutdown;
- (id)statusAsDictionary;
- (void)stopBackgroundActivity;
- (id)taxonomyServiceWorker;
- (void)triggerBackgroundActivity;

@end
