/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaSessionState : HMFObject <HMFDumpState> {
    long long  _playbackState;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSString * _sessionIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long playbackState;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly, copy) NSString *sessionIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dumpState;
- (unsigned long long)hash;
- (id)initWithSessionIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)playbackState;
- (id)propertyQueue;
- (id)sessionIdentifier;
- (void)setPlaybackState:(long long)arg1;

@end
