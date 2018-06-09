/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface UIDocumentBrowserTransitionController : NSObject <UIViewControllerAnimatedTransitioning> {
    FPItem * _item;
    NSURL * _itemURL;
    NSProgress * _loadingProgress;
    UIView * _referenceView;
    <DOCServiceBrowserViewControllerProxy> * _serviceBrowserProxy;
    UIView * _targetView;
    <DOCServiceTransitionProtocol> * _transitionController;
    NSOperationQueue * _transitionControllerQueue;
    bool  _transitionDidFinish;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSProgress *loadingProgress;
@property (readonly) Class superclass;
@property (nonatomic) UIView *targetView;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)animateTransition:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithItem:(id)arg1 browserProxy:(id)arg2 referenceView:(id)arg3;
- (id)initWithItemURL:(id)arg1 browserProxy:(id)arg2 referenceView:(id)arg3;
- (id)loadingProgress;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setLoadingProgress:(id)arg1;
- (void)setTargetView:(id)arg1;
- (id)targetView;
- (double)transitionDuration:(id)arg1;

@end
