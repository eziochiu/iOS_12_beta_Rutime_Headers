/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCodableDescription : NSObject <NSSecureCoding> {
    NSDictionary * _attributes;
    NSMutableDictionary * _attributesByName;
    NSString * _className;
    NSOrderedSet * _displayOrderedAttributes;
    NSString * _localizationTable;
    INSchema * _schema;
    NSString * _typeName;
}

@property (nonatomic, copy) NSDictionary *attributes;
@property (nonatomic, copy) NSString *className;
@property (nonatomic, copy) NSOrderedSet *displayOrderedAttributes;
@property (nonatomic, copy) NSString *localizationTable;
@property (nonatomic) INSchema *schema;
@property (nonatomic, copy) NSString *typeName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)attributeByName:(id)arg1;
- (id)attributes;
- (id)className;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)displayOrderedAttributes;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)highestAttributeTag;
- (id)initWithCoder:(id)arg1;
- (id)localizationTable;
- (id)schema;
- (void)setAttributes:(id)arg1;
- (void)setClassName:(id)arg1;
- (void)setDisplayOrderedAttributes:(id)arg1;
- (void)setLocalizationTable:(id)arg1;
- (void)setSchema:(id)arg1;
- (void)setTypeName:(id)arg1;
- (id)typeName;

@end
