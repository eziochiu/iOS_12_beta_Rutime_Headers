/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKRemoteBlockProxy : ROCKRemoteProxy {
    NSMethodSignature * _methodSignature;
    NSObject<OS_xpc_object> * _signature;
    NSObject<OS_xpc_object> * _stret;
}

@property (nonatomic, retain) NSMethodSignature *methodSignature;
@property (nonatomic, retain) NSObject<OS_xpc_object> *signature;
@property (nonatomic, retain) NSObject<OS_xpc_object> *stret;

+ (id)blockProxyWithSessionManager:(id)arg1 remoteImpersonatorUUID:(id)arg2 signature:(id)arg3 stret:(id)arg4 connectionUUID:(id)arg5;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)initWithSessionManager:(id)arg1 remoteImpersonatorUUID:(id)arg2 signature:(id)arg3 stret:(id)arg4 connectionUUID:(id)arg5;
- (id)methodSignature;
- (void)setMethodSignature:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setStret:(id)arg1;
- (id)signature;
- (id)stret;

@end
