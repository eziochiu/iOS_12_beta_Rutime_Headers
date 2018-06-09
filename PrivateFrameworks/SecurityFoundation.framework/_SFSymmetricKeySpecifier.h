/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFSymmetricKeySpecifier : _SFKeySpecifier {
    id  _symmetricKeySpecifierInternal;
}

@property (nonatomic, readonly) long long keyLengthInBytes;

- (void).cxx_destruct;
- (long long)keyLengthInBytes;

@end
