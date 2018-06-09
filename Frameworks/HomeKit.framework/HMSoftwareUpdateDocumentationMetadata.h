/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMSoftwareUpdateDocumentationMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    HMFDigest * _digest;
}

@property (readonly, copy) NSURL *URL;
@property (readonly, copy) HMFDigest *digest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)digest;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 digest:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
