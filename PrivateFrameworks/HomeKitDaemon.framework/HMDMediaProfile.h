/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaProfile : HMDAccessoryProfile {
    HMDAccessorySettingContainer * _container;
    HMDMediaSession * _mediaSession;
    HMDMediaSystem * _mediaSystem;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (nonatomic, retain) HMDAccessorySettingContainer *container;
@property (readonly) HMDAppleMediaAccessory *mediaAccessory;
@property (retain) HMDMediaSession *mediaSession;
@property (nonatomic) HMDMediaSystem *mediaSystem;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)namespace;
+ (id)sessionNamespace;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleMediaSessionSetAudioControl:(id)arg1;
- (void)_handleRefreshPlayback:(id)arg1;
- (void)_handleSetPlayback:(id)arg1;
- (void)_sessionPlaybackStateUpdated:(id)arg1 notifyXPCClients:(bool)arg2;
- (void)configureWithMessageDispatcher:(id)arg1;
- (id)container;
- (void)encodeWithCoder:(id)arg1;
- (void)handleMediaResponses:(id)arg1 message:(id)arg2;
- (void)handleSessionPlaybackStateUpdatedNotification:(id)arg1;
- (id)initWithAccessory:(id)arg1;
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3;
- (id)mediaAccessory;
- (id)mediaSession;
- (id)mediaSystem;
- (id)messageReceiverChildren;
- (id)propertyQueue;
- (void)registerForMessages;
- (void)sessionAudioControlUpdated:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setMediaSession:(id)arg1;
- (void)setMediaSystem:(id)arg1;
- (void)updateWithResponses:(id)arg1 message:(id)arg2;

@end
