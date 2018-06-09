/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
 */

@interface INCExtensionProxy : NSObject <INCExtensionProxy> {
    id /* block */  _backgroundAppHandler;
    INCExtensionConnection * _connection;
    NSExtension * _extension;
    id /* block */  _imageCachingHandler;
    id /* block */  _responseHandler;
    bool  _shouldCache;
    <INExtensionContextVending> * _vendorRemote;
}

@property (nonatomic, readonly) INCExtensionConnection *_connection;
@property (nonatomic, readonly) NSExtension *_extension;
@property (getter=_isExtensionBeingDebugged, nonatomic, readonly) bool _extensionBeingDebugged;
@property (nonatomic, readonly) <INExtensionContextVending> *_vendorRemote;
@property (nonatomic, copy) id /* block */ backgroundAppHandler;
@property (nonatomic, copy) id /* block */ imageCachingHandler;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic) bool shouldCache;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_connection;
- (id)_extension;
- (id)_initWithConnection:(id)arg1 extension:(id)arg2 vendorRemote:(id)arg3;
- (bool)_isExtensionBeingDebugged;
- (bool)_isIntentRestrictedWhileProtectedDataUnavailableWithCompletionHandler:(id /* block */)arg1;
- (id)_processIntent:(id)arg1 intentResponse:(id)arg2 withCacheItems:(id)arg3;
- (id)_vendorRemote;
- (id /* block */)backgroundAppHandler;
- (void)confirmIntentWithCompletionHandler:(id /* block */)arg1;
- (void)handleIntentWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)imageCachingHandler;
- (void)resolveIntentSlotKeyPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resolveIntentSlotKeyPaths:(id)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)responseHandler;
- (void)setBackgroundAppHandler:(id /* block */)arg1;
- (void)setImageCachingHandler:(id /* block */)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setShouldCache:(bool)arg1;
- (bool)shouldCache;

@end
