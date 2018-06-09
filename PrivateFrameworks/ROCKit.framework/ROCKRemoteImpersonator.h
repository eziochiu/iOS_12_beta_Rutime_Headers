/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKRemoteImpersonator : ROCKImpersonator {
    NSObject<OS_xpc_object> * _remoteImpersonatorUUID;
    ROCKSessionManager * _sessionManager;
    NSObject<OS_xpc_object> * _xpcDictionary;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *remoteImpersonatorUUID;
@property (nonatomic, retain) ROCKSessionManager *sessionManager;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcDictionary;

- (void).cxx_destruct;
- (id)initWithSessionManager:(id)arg1 remoteImpersonatorUUID:(id)arg2;
- (id)remoteImpersonatorUUID;
- (id)sessionManager;
- (void)setRemoteImpersonatorUUID:(id)arg1;
- (void)setSessionManager:(id)arg1;
- (void)setXpcDictionary:(id)arg1;
- (id)xpcDictionary;

@end
