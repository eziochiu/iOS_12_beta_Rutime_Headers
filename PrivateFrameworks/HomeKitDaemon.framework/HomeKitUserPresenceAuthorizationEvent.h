/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HomeKitUserPresenceAuthorizationEvent : HMDLogEvent <HMDAWDLogEvent> {
    AWDHomeKitUserPresenceAuthorization * _metric;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AWDHomeKitUserPresenceAuthorization *metric;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)init;
- (id)metric;
- (id)metricForAWD;

@end
