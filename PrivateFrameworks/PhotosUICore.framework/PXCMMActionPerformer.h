/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMActionPerformer : PXActionPerformer {
    NSProgress * _progress;
    PXCMMSession * _session;
}

@property (nonatomic) <PXCMMActionPerformerDelegate> *delegate;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, readonly) PXCMMSession *session;

+ (id)actionPerformerLog;

- (void).cxx_destruct;
- (id)createActionProgress;
- (id)performActionWithSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)progress;
- (id)session;
- (void)setProgress:(id)arg1;

@end
