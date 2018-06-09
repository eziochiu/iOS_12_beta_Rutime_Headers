/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INArchivedObject : NSObject <NSCopying, NSSecureCoding> {
    NSData * _messageData;
    NSString * _typeName;
}

@property (nonatomic, readonly, copy) NSData *messageData;
@property (nonatomic, readonly, copy) NSString *typeName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeName:(id)arg1 messageData:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)messageData;
- (id)typeName;

@end
