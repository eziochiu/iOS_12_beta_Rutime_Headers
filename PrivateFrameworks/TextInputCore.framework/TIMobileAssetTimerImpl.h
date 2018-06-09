/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIMobileAssetTimerImpl : NSObject {
    NSTimer * _assetTimer;
    id /* block */  _expirationHandler;
}

+ (id)nextFireDateForDate:(id)arg1;

- (void).cxx_destruct;
- (void)assetTimerFired;
- (void)dealloc;
- (id)initWithExpirationHandler:(id /* block */)arg1;
- (void)invalidate;
- (void)updateAssetTimer;

@end
