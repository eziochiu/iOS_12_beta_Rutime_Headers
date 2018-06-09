/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSDictionaryMapNode : NSStoreMapNode <NSSecureCoding> {
    id * _attributes;
    id  _attributesAsEncoded;
}

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void)_doAttributeDecoding;
- (const id*)attributeValues;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValues:(id*)arg1 objectID:(id)arg2;
- (id)valueForKey:(id)arg1;

@end
