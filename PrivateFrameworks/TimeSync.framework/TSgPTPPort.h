/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPPort : NSObject {
    unsigned int  _interestNotification;
    NSObject<OS_dispatch_queue> * _internalPropertyUpdateQueue;
    struct IONotificationPort { } * _notificationPort;
    NSObject<OS_dispatch_queue> * _notificationsQueue;
    __TSgPTPPortNotification * _portForNotification;
    unsigned short  _portNumber;
    long long  _portRole;
    NSObject<OS_dispatch_queue> * _propertyUpdateQueue;
    unsigned int  _service;
}

@property (nonatomic) unsigned short portNumber;
@property (nonatomic) long long portRole;
@property (nonatomic, readonly) long long portType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyUpdateQueue;
@property (nonatomic, readonly) unsigned int service;

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)diagnosticInfoForService:(unsigned int)arg1;
+ (id)gPTPPortWithService:(unsigned int)arg1;

- (bool)_commonInitWithService:(unsigned int)arg1;
- (unsigned short)_portNumber;
- (long long)_portRole;
- (void)dealloc;
- (id)init;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (unsigned short)portNumber;
- (long long)portRole;
- (long long)portType;
- (id)propertyUpdateQueue;
- (unsigned int)service;
- (void)serviceTerminated;
- (void)setPortNumber:(unsigned short)arg1;
- (void)setPortRole:(long long)arg1;
- (void)setPropertyUpdateQueue:(id)arg1;
- (bool)startAutomaticPropertyUpdates;
- (bool)stopAutomaticPropertyUpdates;
- (void)updateProperties;

@end
