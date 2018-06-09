/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDNotificationRegistration : HMFObject <HMFLogging> {
    NSMutableSet * _registeredNotifications;
    <HMFLogging> * _registerer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableSet *registeredNotifications;
@property (nonatomic, readonly) <HMFLogging> *registerer;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addObserver:(SEL)arg1 name:(id)arg2 object:(id)arg3;
- (id)initWithRegisterer:(id)arg1;
- (id)logIdentifier;
- (id)registeredNotifications;
- (id)registerer;

@end
