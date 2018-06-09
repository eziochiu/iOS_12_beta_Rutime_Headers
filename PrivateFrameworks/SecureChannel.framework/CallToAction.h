/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecureChannel.framework/SecureChannel
 */

@interface CallToAction : NSObject <NSSecureCoding> {
    NSString * _message;
    NSString * _title;
}

@property (readonly) NSString *message;
@property (readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccountName:(id)arg1 appName:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (id)title;

@end
