/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCallbackContextRegistry : NSObject {
    NSMutableDictionary * _contextsForTokens;
    unsigned long long  _currentToken;
    NSObject<OS_dispatch_queue> * _readWriteQueue;
}

+ (void)initialize;
+ (id)sharedCallbackContextRegistry;

- (id)callbackContextForToken:(void*)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (void*)registerCallbackContextObject:(id)arg1;
- (void)unregisterCallbackContextForToken:(void*)arg1;

@end
