/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlaybackRequestEnvironment : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _clientIdentifier;
    NSString * _clientVersion;
    MPCPlaybackDelegationProperties * _delegationProperties;
    MPCPrivateListeningStateSource * _privateListeningStateSource;
    NSString * _requestingBundleIdentifier;
    NSString * _requestingBundleVersion;
    ICUserIdentity * _userIdentity;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly, copy) NSString *clientVersion;
@property (nonatomic, readonly, copy) MPCPlaybackDelegationProperties *delegationProperties;
@property (nonatomic, readonly, copy) MPCPrivateListeningStateSource *privateListeningStateSource;
@property (nonatomic, readonly, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *requestingBundleVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithPlaybackRequestEnvironmentClass:(Class)arg1;
- (id)_createStoreRequestContext;
- (id)clientIdentifier;
- (id)clientVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegationProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)privateListeningStateSource;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;

@end
