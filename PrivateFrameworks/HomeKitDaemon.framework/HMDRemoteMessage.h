/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteMessage : HMFMessage {
    HMDHomeKitVersion * _sourceVersion;
    double  _timeout;
    NSUUID * _transactionIdentifier;
    long long  _type;
}

@property (nonatomic) unsigned long long restriction;
@property (getter=isSecure, nonatomic) bool secure;
@property (nonatomic, retain) HMDHomeKitVersion *sourceVersion;
@property (nonatomic, readonly) double timeout;
@property (nonatomic, copy) NSUUID *transactionIdentifier;
@property (nonatomic) long long type;

+ (id)secureMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;
+ (id)secureMessageWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 messagePayload:(id)arg4;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(long long)arg4 timeout:(double)arg5 secure:(bool)arg6;
- (id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 type:(long long)arg4 timeout:(double)arg5 secure:(bool)arg6 restriction:(unsigned long long)arg7;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 type:(long long)arg5 timeout:(double)arg6 secure:(bool)arg7;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 payload:(id)arg4 type:(long long)arg5 timeout:(double)arg6 secure:(bool)arg7 restriction:(unsigned long long)arg8;
- (id)initWithName:(id)arg1 qualityOfService:(long long)arg2 destination:(id)arg3 userInfo:(id)arg4 headers:(id)arg5 payload:(id)arg6;
- (bool)isRemote;
- (bool)isSecure;
- (unsigned long long)restriction;
- (void)setInternalResponseHandler:(id /* block */)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setRestriction:(unsigned long long)arg1;
- (void)setSecure:(bool)arg1;
- (void)setSourceVersion:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (void)setType:(long long)arg1;
- (id)sourceVersion;
- (double)timeout;
- (id)transactionIdentifier;
- (long long)type;

@end
