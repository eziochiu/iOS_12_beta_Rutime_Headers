/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _BRObservableFilePresenter : NSObject <NSFilePresenter> {
    BRObservableFile * _parent;
    NSOperationQueue * _presentedItemOperationQueue;
    NSURL * _presentedItemURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (nonatomic) BRObservableFile *parent;
@property (retain) NSOperationQueue *presentedItemOperationQueue;
@property (copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)arg1;
- (id)parent;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)presentedItemUbiquityDidChange;
- (void)setParent:(id)arg1;
- (void)setPresentedItemOperationQueue:(id)arg1;
- (void)setPresentedItemURL:(id)arg1;

@end
