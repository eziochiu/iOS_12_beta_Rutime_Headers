/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OIXMLAttribute : OIXMLNode {
    NSString * _name;
    NSString * _value;
}

+ (id)attributeWithName:(id)arg1 stringValue:(id)arg2;

- (void).cxx_destruct;
- (void)_appendXMLStringToString:(struct __CFString { }*)arg1 level:(int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithName:(id)arg1 stringValue:(id)arg2;
- (id)name;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end
