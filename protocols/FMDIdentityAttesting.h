/* made by EzioChiu.
 */

@protocol FMDIdentityAttesting <NSObject, NSSecureCoding>

@required

- (NSData *)attestation;
- (NSString *)sessionIdentifier;
- (NSData *)signature;

@end
