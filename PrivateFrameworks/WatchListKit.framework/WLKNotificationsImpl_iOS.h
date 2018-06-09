/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKNotificationsImpl_iOS : NSObject <WLKBulletinClient, WLKNotificationsImpl> {
    NSXPCConnection * _connection;
    <WLKNotificationCenterDelegate> * delegate;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WLKNotificationCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_JSONDictForResponse:(id)arg1;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4;
- (void)receivedBulletinResponse:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
