/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCCloudKitNotificationCenter : NSObject <APSConnectionDelegate> {
    <VCCloudKitNotificationCenterDelegate> * _delegate;
    APSConnection * _pushConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCCloudKitNotificationCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) APSConnection *pushConnection;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)apsEnvironmentFromContainer:(id)arg1;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (id)delegate;
- (void)enablePush;
- (id)pushConnection;
- (id)pushConnectionWithAPSEnvironment:(id)arg1;
- (bool)registerForPushNotificationsWithCloudKitContainer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPushConnection:(id)arg1;

@end
