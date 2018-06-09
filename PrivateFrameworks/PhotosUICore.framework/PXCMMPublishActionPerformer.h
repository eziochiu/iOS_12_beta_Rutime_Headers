/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPublishActionPerformer : PXCMMActionPerformer {
    NSURL * _publishedURL;
}

@property (nonatomic, retain) NSURL *publishedURL;

- (void).cxx_destruct;
- (void)_completePublishActionWithSuccess:(bool)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelActionWithCompletionHandler:(id /* block */)arg1;
- (id)createActionProgress;
- (bool)isCancellable;
- (id)performPublishActionWithSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)publishedURL;
- (void)setPublishedURL:(id)arg1;

@end
