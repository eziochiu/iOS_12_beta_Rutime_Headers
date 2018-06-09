/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditSaveRequest : NSObject <PXRunNodeDelegate> {
    NSArray * __runGraph;
    double  _beginTimestamp;
    id /* block */  _completionHandler;
    PHContentEditingOutput * _contentEditingOutput;
    long long  _currentState;
    PLPhotoEditModel * _editModel;
    int  _identifier;
    PUPhotoEditIrisModel * _irisModel;
    PUPhotoKitAdjustmentSaveNode * _outputNode;
    PHAsset * _photo;
    PUVideoExportNode * _videoExportNode;
    long long  _workImageVersion;
}

@property (setter=_setRunGraph:, nonatomic, copy) NSArray *_runGraph;
@property (nonatomic, readonly) PHContentEditingOutput *contentEditingOutput;
@property (nonatomic, readonly) long long currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) PLPhotoEditModel *editModel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int identifier;
@property (nonatomic, readonly, copy) PUPhotoEditIrisModel *irisModel;
@property (nonatomic, readonly) PHAsset *photo;
@property (nonatomic, readonly) double progress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsProgress;
@property (nonatomic, readonly) long long workImageVersion;

- (void).cxx_destruct;
- (void)_finishWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_handleOutputNodeFinishedWithError:(id)arg1;
- (long long)_imageRequestVersion;
- (void)_performRevertToOriginalOperation;
- (void)_performSaveContentEditingOutput;
- (void)_performSaveEditsOperation;
- (bool)_requiresVideoRender;
- (id)_runGraph;
- (void)_setRunGraph:(id)arg1;
- (void)_transitionToState:(long long)arg1;
- (long long)_videoRequestVersion;
- (void)beginSaveOperationWithCompletionHandler:(id /* block */)arg1;
- (void)cancelSaveOperation;
- (id)contentEditingOutput;
- (long long)currentState;
- (id)editModel;
- (int)identifier;
- (id)init;
- (id)initWithPhoto:(id)arg1 contentEditingOutput:(id)arg2 workImageVersion:(long long)arg3 irisEditModel:(id)arg4;
- (id)initWithPhoto:(id)arg1 editModel:(id)arg2 contentEditingOutput:(id)arg3 workImageVersion:(long long)arg4 irisEditModel:(id)arg5;
- (id)initWithPhoto:(id)arg1 editModel:(id)arg2 workImageVersion:(long long)arg3 irisEditModel:(id)arg4;
- (id)initWithPhotoToRevertToOriginal:(id)arg1;
- (id)irisModel;
- (id)photo;
- (double)progress;
- (void)runNode:(id)arg1 didCancelWithError:(id)arg2;
- (void)runNode:(id)arg1 didCompleteWithError:(id)arg2;
- (bool)supportsProgress;
- (long long)workImageVersion;

@end
