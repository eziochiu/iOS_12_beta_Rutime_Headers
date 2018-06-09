/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMessage : NSObject {
    NSString * _messageName;
    GEOPeer * _peer;
    GEOApplicationAuditToken * _preferredAuditToken;
    NSProgress * _progressToMirrorOverXPC;
    NSDictionary * _userInfo;
    NSObject<OS_xpc_object> * _xpcMessage;
}

@property (nonatomic, readonly) NSString *messageName;
@property (nonatomic, readonly) GEOPeer *peer;
@property (nonatomic, readonly) GEOApplicationAuditToken *preferredAuditToken;
@property (readonly) NSProgress *progress;
@property (nonatomic, readonly) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)initWithXPCMessage:(id)arg1 peer:(id)arg2;
- (id)messageName;
- (id)peer;
- (id)preferredAuditToken;
- (id)progress;
- (void)sendReply:(id)arg1;
- (void)sendReplyWithXPCUserInfo:(id)arg1;
- (id)userInfo;

@end
