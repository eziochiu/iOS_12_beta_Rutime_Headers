/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteMessageLogEvent : HMDLogEvent <HMDAWDLogEvent> {
    HMDRemoteMessage * _remoteMessage;
    bool  _sending;
    int  _transportType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDRemoteMessage *remoteMessage;
@property (nonatomic, readonly) bool sending;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int transportType;

+ (int)awdMessageTypeFromHMDMessageType:(long long)arg1;
+ (id)receivedRemoteMessage:(id)arg1 transportType:(int)arg2;
+ (id)sendingRemoteMessage:(id)arg1 transportType:(int)arg2;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)initWithRemoteMessage:(id)arg1 transportType:(int)arg2 sending:(bool)arg3;
- (id)metricForAWD;
- (id)remoteMessage;
- (bool)sending;
- (int)transportType;

@end