/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOXPCRequest : NSObject <NSSecureCoding> {
    GEOApplicationAuditToken * _auditToken;
    NSError * _error;
    unsigned char  _flags;
    NSString * _method;
    NSObject<OS_xpc_object> * _object;
    GEOPeer * _peer;
    NSProgress * _progressToMirrorOverXPC;
    NSString * _service;
    GEOMapServiceTraits * _traits;
}

@property (nonatomic, readonly) unsigned char flags;
@property (nonatomic, retain) NSString *method;
@property (nonatomic, retain) NSObject<OS_xpc_object> *object;
@property (nonatomic, retain) GEOPeer *peer;
@property (nonatomic, retain) GEOApplicationAuditToken *preferredAuditToken;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *replyDictionary;
@property (nonatomic, retain) NSString *service;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

+ (bool)reportsProgress;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createConnectionWithQueue:(id)arg1;
- (id)_prepareRequest;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)flags;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1 traits:(id)arg2 auditToken:(id)arg3;
- (id)method;
- (id)object;
- (id)peer;
- (id)preferredAuditToken;
- (id)progress;
- (id)replyDictionary;
- (void)send:(id)arg1;
- (void)send:(id)arg1 withReply:(id)arg2 handler:(id /* block */)arg3;
- (id)service;
- (void)setMethod:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setPeer:(id)arg1;
- (void)setPreferredAuditToken:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setService:(id)arg1;
- (id)traits;

@end
