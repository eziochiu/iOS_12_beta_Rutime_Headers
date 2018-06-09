/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUINavigationBarContext : NSObject {
    SKUIClientContext * _clientContext;
    double  _maximumNavigationBarWidth;
    NSOperationQueue * _operationQueue;
    UIViewController * _parentViewController;
    SKUIResourceLoader * _resourceLoader;
    SKUILayoutCache * _textLayoutCache;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic) double maximumNavigationBarWidth;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic) UIViewController *parentViewController;
@property (nonatomic, retain) SKUIResourceLoader *resourceLoader;
@property (nonatomic, retain) SKUILayoutCache *textLayoutCache;

- (void).cxx_destruct;
- (id)clientContext;
- (double)maximumNavigationBarWidth;
- (id)operationQueue;
- (id)parentViewController;
- (id)resourceLoader;
- (void)setClientContext:(id)arg1;
- (void)setMaximumNavigationBarWidth:(double)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setResourceLoader:(id)arg1;
- (void)setTextLayoutCache:(id)arg1;
- (id)textLayoutCache;

@end
