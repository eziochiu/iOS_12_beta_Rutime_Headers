/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDRemoteCompanionUserNotificationRequestContext : NSObject {
    id /* block */  _completion;
    HDCodableCompanionUserNotificationRequest * _request;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) HDCodableCompanionUserNotificationRequest *request;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)request;
- (void)setCompletion:(id /* block */)arg1;
- (void)setRequest:(id)arg1;

@end
