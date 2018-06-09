/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFServiceIdentifier : NSObject <NSCopying, NSSecureCoding> {
    id  _serviceIdentifierInternal;
}

@property (getter=_lookupKey, nonatomic, readonly, copy) NSString *lookupKey;
@property (nonatomic, readonly, copy) NSString *serviceID;
@property (nonatomic, readonly) long long type;

+ (id)serviceIdentifierForAccessGroup:(id)arg1;
+ (id)serviceIdentifierForBundleID:(id)arg1;
+ (id)serviceIdentifierForCustomString:(id)arg1;
+ (id)serviceIdentifierForDomain:(id)arg1;
+ (id)serviceIdentifierForURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_lookupKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceID:(id)arg1 forType:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)serviceID;
- (long long)type;

@end
