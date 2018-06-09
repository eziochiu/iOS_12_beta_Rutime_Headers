/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomePresence : HMFObject <HMDHomePresenceCheck, HMFLogging> {
    HMDHome * _home;
    HMDDevice * _lastUpdateByDevice;
    NSDictionary * _userPresenceMap;
}

@property (nonatomic, readonly) NSArray *authorizedUsers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDHome *home;
@property (nonatomic, readonly) HMDDevice *lastUpdateByDevice;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *userPresenceMap;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)areUsersAtHome:(id)arg1;
- (bool)areUsersNotAtHome:(id)arg1;
- (id)authorizedUsers;
- (id)description;
- (id)home;
- (id)initWithHome:(id)arg1 userPresenceMap:(id)arg2 lastUpdateByDevice:(id)arg3;
- (bool)isAnyUserAtHome;
- (bool)isEqual:(id)arg1;
- (bool)isNoUserAtHome;
- (bool)isUserAtHome:(id)arg1;
- (bool)isUserNotAtHome:(id)arg1;
- (id)lastUpdateByDevice;
- (id)logIdentifier;
- (id)serializedIdentifierDictionary;
- (id)serializedUUIDDictionary;
- (id)userPresenceMap;

@end
