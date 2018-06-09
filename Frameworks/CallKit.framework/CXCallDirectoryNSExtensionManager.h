/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryNSExtensionManager : NSObject {
    <CXCallDirectoryNSExtensionManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    id  _extensionMatchingContext;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <CXCallDirectoryNSExtensionManagerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, retain) id extensionMatchingContext;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)baseExtensionMatchingAttributes;

- (void).cxx_destruct;
- (void)_beginMatchingExtensionsIfNecessary;
- (void)_extensionForIdentifier:(id)arg1 containingAppBundleURL:(id)arg2 completion:(id /* block */)arg3;
- (void)beginMatchingExtensions;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)extensionMatchingContext;
- (void)extensionWithIdentifier:(id)arg1 inContainingAppWithProcessIdentifier:(int)arg2 completion:(id /* block */)arg3;
- (void)extensionsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setExtensionMatchingContext:(id)arg1;
- (void)setQueue:(id)arg1;

@end
