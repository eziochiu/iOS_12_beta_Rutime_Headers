/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUExtendedAttributeCollection : NSObject {
    NSMutableDictionary * _attributes;
}

- (void).cxx_destruct;
- (id)allAttributes;
- (id)description;
- (id)extendedAttributeForName:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAttributes:(id)arg1;
- (id)initWithPath:(id)arg1 options:(int)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (bool)setAttributeCollectionToPath:(id)arg1 intent:(unsigned int)arg2 options:(int)arg3 error:(id*)arg4;
- (void)setExtendedAttributeValue:(id)arg1 forName:(id)arg2;

@end
