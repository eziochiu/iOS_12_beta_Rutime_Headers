/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIMobileAssetTimer : NSObject {
    TIMobileAssetTimerImpl * _impl;
}

+ (id)nextFireDateForDate:(id)arg1;
+ (id)scheduledTimerWithExpirationHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithExpirationHandler:(id /* block */)arg1;

@end
