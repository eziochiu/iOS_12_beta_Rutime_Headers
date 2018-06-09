/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFProductInfo : HMFObject <NSCopying, NSSecureCoding> {
    long long  _productClass;
    long long  _productPlatform;
    long long  _productVariant;
    HMFSoftwareVersion * _softwareVersion;
}

@property (readonly) long long productClass;
@property (readonly) long long productPlatform;
@property (readonly) long long productVariant;
@property (nonatomic, readonly) HMFSoftwareVersion *softwareVersion;

+ (id)decodeSoftwareVersionWithCoder:(id)arg1;
+ (void)encodeSoftwareVersion:(id)arg1 withCoder:(id)arg2;
+ (id)productInfo;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlatform:(long long)arg1 class:(long long)arg2 softwareVersion:(id)arg3;
- (id)initWithPlatform:(long long)arg1 class:(long long)arg2 variant:(long long)arg3 softwareVersion:(id)arg4;
- (bool)isEqual:(id)arg1;
- (long long)productClass;
- (long long)productPlatform;
- (long long)productVariant;
- (id)shortDescription;
- (id)softwareVersion;

@end
