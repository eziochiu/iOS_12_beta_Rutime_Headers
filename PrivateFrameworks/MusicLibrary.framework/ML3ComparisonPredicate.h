/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ComparisonPredicate : ML3PropertyPredicate {
    bool  _caseInsensitive;
    int  _comparison;
    NSString * _transformFunction;
    NSString * _treatNullAsString;
    id  _value;
}

@property (nonatomic) bool caseInsensitive;
@property (nonatomic) int comparison;
@property (nonatomic, readonly, copy) NSString *operator;
@property (nonatomic, copy) NSString *transformFunction;
@property (nonatomic, copy) NSString *treatNullAsString;
@property (nonatomic, retain) id value;

+ (id)predicateWithProperty:(id)arg1 equalToInt64:(long long)arg2;
+ (id)predicateWithProperty:(id)arg1 equalToInteger:(long long)arg2;
+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(bool)arg4;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(bool)arg4 treatNullAsString:(id)arg5;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 transformFunction:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (bool)caseInsensitive;
- (int)comparison;
- (bool)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;
- (id)databaseStatementParameters;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(bool)arg4 transformFunction:(id)arg5 treatNullAsString:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)operator;
- (void)setCaseInsensitive:(bool)arg1;
- (void)setComparison:(int)arg1;
- (void)setTransformFunction:(id)arg1;
- (void)setTreatNullAsString:(id)arg1;
- (void)setValue:(id)arg1;
- (id)transformFunction;
- (id)treatNullAsString;
- (id)value;
- (id)valueToBindForOperation:(long long)arg1;

@end
