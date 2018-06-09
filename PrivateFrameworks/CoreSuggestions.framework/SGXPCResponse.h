/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGXPCResponse : NSObject <NSSecureCoding> {
    NSError * _error;
}

@property (nonatomic, readonly) NSError *error;

+ (id)response;
+ (id)responseWithError:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;

@end
