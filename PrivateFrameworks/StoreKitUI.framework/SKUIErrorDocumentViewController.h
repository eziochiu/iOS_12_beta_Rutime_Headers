/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIErrorDocumentViewController : SKUIViewController <SKUIDocumentViewController> {
    SKUIClientContext * _clientContext;
    unsigned long long  _contentUnavailableStyle;
    id /* block */  _retryActionBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ retryActionBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithBackgroundColor:(id)arg1 clientContext:(id)arg2;
- (void)loadView;
- (id /* block */)retryActionBlock;
- (void)setRetryActionBlock:(id /* block */)arg1;

@end
