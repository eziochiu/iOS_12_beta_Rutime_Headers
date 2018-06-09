/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAuthenticationBulletinOperation : VSAsyncOperation {
    NSURL * _appStoreRoomURL;
    NSXPCConnection * _connection;
}

@property (nonatomic, readonly, copy) NSURL *appStoreRoomURL;
@property (nonatomic, retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)_serviceWithErrorHandler:(id /* block */)arg1;
- (id)appStoreRoomURL;
- (id)connection;
- (void)executionDidBegin;
- (id)init;
- (id)initWithAppStoreRoomURL:(id)arg1;
- (void)setConnection:(id)arg1;

@end
