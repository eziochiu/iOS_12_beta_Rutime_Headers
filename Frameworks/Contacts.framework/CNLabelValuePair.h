/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNLabelValuePair : NSObject <NSCopying> {
    NSString * _label;
    id  _value;
}

@property (readonly, copy) NSString *label;
@property (readonly, copy) id value;

+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithLabel:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)value;

@end
