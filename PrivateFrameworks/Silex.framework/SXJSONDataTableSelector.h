/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXJSONDataTableSelector : SXJSONObject <SXDataTableSelector> {
    unsigned long long  _numberOfConditions;
    unsigned long long  _selectorWeight;
}

@property (nonatomic, readonly) unsigned long long columnIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfConditions;
@property (nonatomic, readonly) unsigned long long rowIndex;
@property (nonatomic) unsigned long long selectorWeight;
@property (readonly) Class superclass;

- (void)commonInit;
- (id)description;
- (unsigned long long)evenColumnsWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)evenRowsWithValue:(id)arg1 withType:(int)arg2;
- (id)initWithBackingObject:(id)arg1 andVersion:(id)arg2;
- (id)initWithJSONData:(id)arg1 andVersion:(id)arg2;
- (id)initWithJSONObject:(id)arg1 andVersion:(id)arg2;
- (unsigned long long)numberOfConditions;
- (unsigned long long)oddColumnsWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)oddRowsWithValue:(id)arg1 withType:(int)arg2;
- (id)propertyList;
- (unsigned long long)selectorBooleanForValue:(id)arg1;
- (unsigned long long)selectorWeight;
- (void)setNumberOfConditions:(unsigned long long)arg1;
- (void)setSelectorWeight:(unsigned long long)arg1;
- (unsigned long long)weightForSelectorKey:(id)arg1;

@end
