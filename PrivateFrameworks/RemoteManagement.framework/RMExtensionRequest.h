/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMExtensionRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _requestedIdentifier;
    unsigned long long  _requestedIdentifierType;
    NSString * _sourceDeviceIdentifier;
    NSString * _sourceProcessIdentifier;
    NSString * _sourceUserIdentifier;
    double  _timeStamp;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSString *requestedIdentifier;
@property (nonatomic, readonly) unsigned long long requestedIdentifierType;
@property (nonatomic, readonly) NSString *sourceDeviceIdentifier;
@property (nonatomic, readonly) NSString *sourceProcessIdentifier;
@property (nonatomic, readonly) NSString *sourceUserIdentifier;
@property (nonatomic, readonly) double timeStamp;
@property (nonatomic, readonly) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestedIdentifier:(id)arg1 requestedIdentifierType:(unsigned long long)arg2 sourceDeviceIdentifier:(id)arg3 sourceUserIdentifier:(id)arg4 sourceProcessIdentifier:(id)arg5 userInfo:(id)arg6;
- (id)initWithRequestedIdentifier:(id)arg1 requestedIdentifierType:(unsigned long long)arg2 sourceDeviceIdentifier:(id)arg3 sourceUserIdentifier:(id)arg4 sourceProcessIdentifier:(id)arg5 userInfo:(id)arg6 timeStamp:(double)arg7;
- (id)requestedIdentifier;
- (unsigned long long)requestedIdentifierType;
- (id)sourceDeviceIdentifier;
- (id)sourceProcessIdentifier;
- (id)sourceUserIdentifier;
- (double)timeStamp;
- (id)userInfo;

@end
