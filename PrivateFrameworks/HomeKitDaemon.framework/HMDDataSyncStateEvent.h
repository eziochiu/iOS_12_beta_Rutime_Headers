/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataSyncStateEvent : HMDLogEvent {
    unsigned long long  _dataSyncState;
}

@property (nonatomic) unsigned long long dataSyncState;

+ (id)dataSyncStateEstablished:(unsigned long long)arg1;
+ (id)uuid;

- (unsigned long long)dataSyncState;
- (id)initWithDataSyncState:(unsigned long long)arg1;
- (void)setDataSyncState:(unsigned long long)arg1;

@end
