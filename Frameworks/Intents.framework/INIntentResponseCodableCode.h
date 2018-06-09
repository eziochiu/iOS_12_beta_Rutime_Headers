/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentResponseCodableCode : NSObject <NSSecureCoding> {
    NSString * _formatString;
    NSString * _formatStringLocID;
    NSString * _name;
    bool  _success;
    long long  _value;
}

@property (nonatomic, copy) NSString *formatString;
@property (nonatomic, copy) NSString *formatStringLocID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSArray *parameterNames;
@property (getter=isSuccess, nonatomic) bool success;
@property (nonatomic) long long value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)formatString;
- (id)formatStringLocID;
- (id)initWithCoder:(id)arg1;
- (bool)isSuccess;
- (id)name;
- (id)parameterNames;
- (void)setFormatString:(id)arg1;
- (void)setFormatStringLocID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setValue:(long long)arg1;
- (long long)value;

@end
