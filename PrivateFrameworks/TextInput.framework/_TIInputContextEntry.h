/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface _TIInputContextEntry : NSObject <NSCopying, NSSecureCoding> {
    NSString * _senderIdentifier;
    NSString * _text;
    NSDate * _timestamp;
}

@property (nonatomic, copy) NSString *senderIdentifier;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)senderIdentifier;
- (void)setSenderIdentifier:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)text;
- (id)timestamp;

@end
