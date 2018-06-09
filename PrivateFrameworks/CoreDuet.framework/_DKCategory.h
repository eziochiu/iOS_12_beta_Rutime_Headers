/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKCategory : _DKObject <_DKHasComparableValue, _DKHasObjectType, _DKHasPrimaryValue> {
    _DKCategoryType * _categoryType;
    long long  _integerValue;
}

@property (retain) _DKCategoryType *categoryType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property long long integerValue;
@property (readonly) Class superclass;

+ (id)_categoryFromManagedObject:(id)arg1 readMetadata:(bool)arg2 cache:(id)arg3;
+ (id)categoryWithInteger:(long long)arg1 type:(id)arg2;
+ (id)entityName;
+ (id)fromPBCodable:(id)arg1;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(bool)arg2 cache:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)categoryType;
- (long long)compareValue:(id)arg1;
- (bool)copyToManagedObject:(id)arg1;
- (id)description;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInteger:(long long)arg1 type:(id)arg2 cache:(id)arg3;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (id)objectType;
- (id)primaryValue;
- (void)setCategoryType:(id)arg1;
- (void)setIntegerValue:(long long)arg1;
- (id)stringValue;
- (id)toPBCodable;
- (long long)typeCode;

@end
