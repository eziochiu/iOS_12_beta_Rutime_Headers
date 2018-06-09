/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
 */

@interface _QPQueryRankerConfigurationNotifyRegistration : NSObject {
    _QPQueryRankerConfiguration * _configuration;
    NSString * _notification;
    NSObject<OS_dispatch_queue> * _queue;
    int  _token;
    bool  _tokenRegistered;
}

@property _QPQueryRankerConfiguration *configuration;
@property (copy) NSString *notification;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property int token;
@property (getter=isTokenRegistered) bool tokenRegistered;

- (void).cxx_destruct;
- (id)configuration;
- (bool)isTokenRegistered;
- (id)notification;
- (id)queue;
- (void)registerHandler:(id /* block */)arg1;
- (void)safelyCancel;
- (void)setConfiguration:(id)arg1;
- (void)setNotification:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setToken:(int)arg1;
- (void)setTokenRegistered:(bool)arg1;
- (int)token;

@end
