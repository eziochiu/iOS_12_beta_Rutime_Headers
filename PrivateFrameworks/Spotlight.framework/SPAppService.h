/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

@interface SPAppService : NSObject {
    NSObject<OS_dispatch_queue> * _appServiceQueue;
    int  _awakeNotifyToken;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)_cancelAwakeNotifyToken;
- (void)_registerAwakeNotifyToken;
- (id)init;

@end
