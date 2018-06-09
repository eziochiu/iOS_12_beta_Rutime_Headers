/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMSimulatedDaemonController : IMDaemonController {
    NSArray * _listeners;
}

@property (nonatomic, retain) NSArray *listeners;

+ (void)beginSimulatingDaemon;
+ (id)dictionaryForChat:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (bool)connectToDaemonWithLaunch:(bool)arg1;
- (bool)connectToDaemonWithLaunch:(bool)arg1 capabilities:(unsigned int)arg2 blockUntilConnected:(bool)arg3;
- (bool)isConnected;
- (id)listeners;
- (void)sendBalloonPayload:(id)arg1 attachments:(id)arg2 withMessageGUID:(id)arg3 bundleID:(id)arg4;
- (void)setListeners:(id)arg1;

@end
