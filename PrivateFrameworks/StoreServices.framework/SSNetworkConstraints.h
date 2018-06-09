/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSNetworkConstraints : NSObject <NSCopying, NSSecureCoding, SSXPCCoding> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableDictionary * _sizeLimits;
}

@property (getter=isAnyNetworkTypeEnabled, readonly) bool anyNetworkTypeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_addNetworkConstraintsToDictionary:(id)arg1 forNetworkType:(long long)arg2 legacyDictionary:(id)arg3;
+ (id)_newLegacyNetworkConstraintsWithDictionary:(id)arg1;
+ (id)_newModernNetworkConstraintsWithArray:(id)arg1;
+ (id)networkConstraintsForDownloadKind:(id)arg1 fromBag:(id)arg2;
+ (id)newNetworkConstraintsByDownloadKindFromURLBag:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)_copySizeLimits;
- (void)_disableAllNetworkTypes;
- (void)_setSizeLimit:(long long)arg1 forNetworkType:(long long)arg2;
- (long long)_sizeLimitForNetworkType:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (void)disableCellularNetworkTypes;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSizeLimitForNetworkType:(long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isAnyNetworkTypeEnabled;
- (bool)isEqual:(id)arg1;
- (void)setAllNetworkTypesDisabled;
- (void)setSizeLimit:(long long)arg1 forNetworkType:(long long)arg2;
- (void)setSizeLimitsWithStoreConstraintDictionary:(id)arg1;
- (long long)sizeLimitForNetworkType:(long long)arg1;

@end
