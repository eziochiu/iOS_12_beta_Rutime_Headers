/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUSaveReviewAssetRequest : NSObject <PXRunNodeDelegate> {
    double  _beginTimestamp;
    id /* block */  _completionHandler;
    PHContentEditingOutput * _contentEditingOutput;
    long long  _currentState;
    NSURL * _directory;
    PLPhotoEditModel * _editModel;
    <PUEditableAsset> * _editableAsset;
    PUEditableMediaProvider * _editableMediaProvider;
    int  _identifier;
    PUPhotoEditIrisModel * _irisModel;
    PUReviewCreateAssetNode * _outputNode;
    PUVideoExportNode * _videoExportNode;
    long long  _workImageVersion;
}

@property (nonatomic, readonly) PHContentEditingOutput *contentEditingOutput;
@property (nonatomic, readonly) long long currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *directory;
@property (nonatomic, readonly, copy) PLPhotoEditModel *editModel;
@property (nonatomic, readonly) <PUEditableAsset> *editableAsset;
@property (nonatomic, readonly) PUEditableMediaProvider *editableMediaProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int identifier;
@property (nonatomic, readonly, copy) PUPhotoEditIrisModel *irisModel;
@property (nonatomic, readonly) double progress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsProgress;
@property (nonatomic, readonly) long long workImageVersion;

- (void).cxx_destruct;
- (void)_finishWithAsset:(id)arg1 error:(id)arg2;
- (void)_handleOutputNodeFinishedWithError:(id)arg1;
- (long long)_imageRequestVersion;
- (void)_performInternalSaveOperation;
- (void)_performSaveOperation;
- (bool)_requiresVideoRender;
- (void)_transitionToState:(long long)arg1;
- (long long)_videoRequestVersion;
- (void)beginSaveOperationWithCompletionHandler:(id /* block */)arg1;
- (void)cancelSaveOperation;
- (id)contentEditingOutput;
- (long long)currentState;
- (id)directory;
- (id)editModel;
- (id)editableAsset;
- (id)editableMediaProvider;
- (int)identifier;
- (id)init;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 contentEditingOutput:(id)arg4 workImageVersion:(long long)arg5 irisEditModel:(id)arg6;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 editModel:(id)arg4 contentEditingOutput:(id)arg5 workImageVersion:(long long)arg6 irisEditModel:(id)arg7;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 editModel:(id)arg4 workImageVersion:(long long)arg5 irisEditModel:(id)arg6;
- (id)initWithAssetForCopying:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 resourceURL:(id)arg4 contentEditingOutput:(id)arg5 workImageVersion:(long long)arg6 irisEditModel:(id)arg7;
- (id)initWithAssetForRevertToOriginal:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3;
- (id)irisModel;
- (double)progress;
- (void)runNode:(id)arg1 didCancelWithError:(id)arg2;
- (void)runNode:(id)arg1 didCompleteWithError:(id)arg2;
- (bool)supportsProgress;
- (long long)workImageVersion;

@end
