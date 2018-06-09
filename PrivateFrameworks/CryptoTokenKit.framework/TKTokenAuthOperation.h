/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenAuthOperation : NSObject <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (bool)finishWithError:(id*)arg1;
- (void)finishWithReply:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;

@end
