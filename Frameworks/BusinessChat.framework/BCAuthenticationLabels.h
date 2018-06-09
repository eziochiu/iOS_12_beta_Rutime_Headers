/* made by EzioChiu
   Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

@interface BCAuthenticationLabels : NSObject <BCDictionarySerializable, NSSecureCoding> {
    NSString * _action;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) NSString *action;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 action:(id)arg3;
- (void)setAction:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
