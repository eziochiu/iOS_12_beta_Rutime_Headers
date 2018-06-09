/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSFetchIndexDescription : NSObject <NSCoding, NSSecureCoding> {
    NSArray * _elements;
    NSEntityDescription * _entity;
    NSString * _name;
    NSPredicate * _partialIndexPredicate;
}

@property (copy) NSArray *elements;
@property (nonatomic, readonly) NSEntityDescription *entity;
@property (copy) NSString *name;
@property (copy) NSPredicate *partialIndexPredicate;

+ (bool)supportsSecureCoding;

- (void)_checkElements:(id)arg1;
- (id)_compoundIndexRepresentation;
- (bool)_expressionIsCompoundIndexCompatible:(id)arg1;
- (bool)_isBinary;
- (bool)_isCompoundIndexCompatible;
- (bool)_isEditable;
- (bool)_isIndexForProperty:(id)arg1;
- (bool)_isMappedSinglePropertyIndex;
- (bool)_isPurelyModeledIndex;
- (void)_setEntity:(id)arg1;
- (void)_throwIfNotEditable;
- (void)_validateCollationTypeChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)elements;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 elements:(id)arg2;
- (id)initWithName:(id)arg1 predicate:(id)arg2 elements:(id)arg3 entity:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)partialIndexPredicate;
- (void)setElements:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPartialIndexPredicate:(id)arg1;

@end
