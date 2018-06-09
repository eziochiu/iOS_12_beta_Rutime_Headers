/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INTimer : NSObject <NSCopying, NSSecureCoding> {
    double  _duration;
    NSString * _identifier;
    INSpeakableString * _label;
    double  _remainingTime;
    long long  _state;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) INSpeakableString *label;
@property (nonatomic, readonly) double remainingTime;
@property (nonatomic, readonly) long long state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 duration:(double)arg2 remainingTime:(double)arg3 identifier:(id)arg4 state:(long long)arg5;
- (bool)isEqual:(id)arg1;
- (id)label;
- (double)remainingTime;
- (long long)state;

@end
