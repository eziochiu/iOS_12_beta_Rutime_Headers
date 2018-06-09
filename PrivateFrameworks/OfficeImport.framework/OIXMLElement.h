/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OIXMLElement : OIXMLNode {
    id  _attributes;
    id  _children;
    bool  _hasMultipleAttributes;
    bool  _hasMultipleChildren;
    NSString * _name;
    unsigned char  _type;
}

+ (id)elementWithType:(unsigned char)arg1;
+ (id)elementWithType:(unsigned char)arg1 stringValue:(id)arg2;

- (void).cxx_destruct;
- (void)_appendXMLStringToString:(struct __CFString { }*)arg1 level:(int)arg2;
- (void)addAttribute:(id)arg1;
- (void)addChild:(id)arg1;
- (long long)attributeCount;
- (long long)childrenCount;
- (id)closingTagString;
- (id)contentString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithType:(unsigned char)arg1;
- (id)initWithType:(unsigned char)arg1 stringValue:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEmptyHTMLElement;
- (id)name;
- (id)openingTagString;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end
