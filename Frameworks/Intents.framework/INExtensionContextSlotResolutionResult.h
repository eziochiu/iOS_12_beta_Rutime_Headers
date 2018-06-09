/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INExtensionContextSlotResolutionResult : NSObject <NSSecureCoding> {
    NSData * _data;
    long long  _result;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long result;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(long long)arg1 data:(id)arg2;
- (long long)result;

@end
