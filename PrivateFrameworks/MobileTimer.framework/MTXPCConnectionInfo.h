/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTXPCConnectionInfo : NSObject {
    id  _exportedObject;
    NSXPCInterface * _exportedObjectInterface;
    NSString * _lifecycleNotification;
    NSString * _machServiceName;
    unsigned long long  _options;
    NSXPCInterface * _remoteObjectInterface;
    NSString * _requiredEntitlement;
}

@property (nonatomic, retain) id exportedObject;
@property (nonatomic, retain) NSXPCInterface *exportedObjectInterface;
@property (nonatomic, copy) NSString *lifecycleNotification;
@property (nonatomic, copy) NSString *machServiceName;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) NSXPCInterface *remoteObjectInterface;
@property (nonatomic, copy) NSString *requiredEntitlement;

+ (id)infoForMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObject:(id)arg3 exportedObjectInterface:(id)arg4 lifecycleNotification:(id)arg5 requiredEntitlement:(id)arg6 options:(unsigned long long)arg7;
+ (id)infoForMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 options:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)exportedObject;
- (id)exportedObjectInterface;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObject:(id)arg3 exportedObjectInterface:(id)arg4 lifecycleNotification:(id)arg5 requiredEntitlement:(id)arg6 options:(unsigned long long)arg7;
- (id)lifecycleNotification;
- (id)machServiceName;
- (unsigned long long)options;
- (id)remoteObjectInterface;
- (id)requiredEntitlement;
- (void)setExportedObject:(id)arg1;
- (void)setExportedObjectInterface:(id)arg1;
- (void)setLifecycleNotification:(id)arg1;
- (void)setMachServiceName:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)setRequiredEntitlement:(id)arg1;

@end
