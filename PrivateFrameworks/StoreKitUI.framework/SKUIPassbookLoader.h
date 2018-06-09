/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPassbookLoader : NSObject <PKAddPassesViewControllerDelegate> {
    SKUIClientContext * _clientContext;
    <SKUIPassbookLoaderDelegate> * _delegate;
    long long  _loadCount;
    NSOperationQueue * _operationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIPassbookLoaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didLoadWithPass:(id)arg1 error:(id)arg2;
- (void)_loadPassWithURL:(id)arg1;
- (void)_sendDidFinishIfFinished;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (id)delegate;
- (id)initWithClientContext:(id)arg1;
- (void)loadPassWithURL:(id)arg1;
- (id)operationQueue;
- (void)setDelegate:(id)arg1;
- (void)setOperationQueue:(id)arg1;

@end
