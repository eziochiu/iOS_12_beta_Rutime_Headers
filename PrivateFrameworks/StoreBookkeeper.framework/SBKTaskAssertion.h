/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKTaskAssertion : NSObject {
    NSString * _debugInfo;
    id /* block */  _expireHandler;
    SBKProcessAssertion * _processAssertion;
}

+ (id)newBackgroundTaskWithExpirationHandler:(id /* block */)arg1 debugInfo:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithExpirationHandler:(id /* block */)arg1 debugInfo:(id)arg2;
- (void)invalidate;
- (void)performExpirationHandler;

@end
