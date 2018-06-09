/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBLEBroadcastEventKeyGeneration : HMDLogEvent <HMDAWDLogEvent> {
    HMDAccessory * _accessory;
    int  _reason;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int reason;
@property (readonly) Class superclass;

+ (id)broadcastKeyGenerationEventForAccessory:(id)arg1 reason:(int)arg2;
+ (void)initialize;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)accessory;
- (id)initBroadcastKeyGenerationEventForAccessory:(id)arg1 reason:(int)arg2;
- (id)metricForAWD;
- (int)reason;

@end
