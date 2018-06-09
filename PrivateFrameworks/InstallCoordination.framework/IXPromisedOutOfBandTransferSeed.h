/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXPromisedOutOfBandTransferSeed : IXOpaqueDataPromiseSeed <NSCopying, NSSecureCoding>

+ (bool)supportsSecureCoding;

- (Class)clientPromiseClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
