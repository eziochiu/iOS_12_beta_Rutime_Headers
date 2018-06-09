/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPCompanionAppServerProtocolStub : NSObject <SPCompanionAppServerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)extensionWithIdentifier:(id)arg1 gotUnknownInterfaceController:(id)arg2;
- (void)fetchNotificationForNotificationID:(id)arg1 completion:(id /* block */)arg2;
- (void)launchCompanionAppForGizmoAppWithIdentifier:(id)arg1 withUserInfoData:(id)arg2 reply:(id /* block */)arg3;
- (void)requestTimingData:(id)arg1 timingMetaData:(id)arg2;
- (void)sendCacheRequest:(id)arg1 identifier:(id)arg2;
- (void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3;
- (void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 reply:(id /* block */)arg4;

@end
