/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUINotificationCenter : IKJSObject <WLKNotificationCenterDelegate, WLKUINotificationCenter> {
    WLKNotificationCenter * _center;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleAction:(id)arg1;
- (id)initWithAppContext:(id)arg1;
- (void)post:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4;

@end
