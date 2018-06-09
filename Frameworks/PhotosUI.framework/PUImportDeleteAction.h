/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportDeleteAction : PUImportConcurrentAction {
    NSArray * _assets;
    PUImportController * _importController;
    NSProgress * _progress;
    NSMutableArray * _removedAssets;
    NSString * _sessionUuid;
    bool  _userInitiatedDelete;
}

@property PUImportController *importController;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, readonly) NSString *sessionUuid;
@property bool userInitiatedDelete;

- (void).cxx_destruct;
- (void)_performMockAction;
- (void)_performRealAction;
- (void)_preAction;
- (bool)canDeleteAssets;
- (void)cancel;
- (void)dealloc;
- (void)didRemove:(id)arg1;
- (void)finish;
- (id)importController;
- (id)initWithAssets:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performAction;
- (id)progress;
- (void)sendActionProgress:(double)arg1;
- (id)sessionUuid;
- (void)setImportController:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setUserInitiatedDelete:(bool)arg1;
- (void)start;
- (void)startObservingDeleteProgress;
- (void)stopObservingDeleteProgress;
- (bool)userInitiatedDelete;

@end
