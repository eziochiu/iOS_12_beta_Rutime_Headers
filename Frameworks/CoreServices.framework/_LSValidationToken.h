/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSValidationToken : NSObject <NSSecureCoding> {
    NSData * _HMAC;
    NSData * _nonce;
    id  _owner;
    NSData * _payload;
}

@property (nonatomic) id owner;

+ (id)HMACWithPayload:(id)arg1 nonce:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (bool)isCorrectForPayload:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;

@end
