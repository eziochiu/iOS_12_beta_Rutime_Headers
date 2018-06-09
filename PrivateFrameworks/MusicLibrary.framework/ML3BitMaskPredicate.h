/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3BitMaskPredicate : ML3PropertyPredicate {
    long long  _mask;
    long long  _value;
}

@property (nonatomic) long long mask;
@property (nonatomic) long long value;

+ (id)predicateWithProperty:(id)arg1 mask:(long long)arg2 value:(long long)arg3;
+ (bool)supportsSecureCoding;

- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)databaseStatementParameters;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1 mask:(long long)arg2 value:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)mask;
- (void)setMask:(long long)arg1;
- (void)setValue:(long long)arg1;
- (long long)value;

@end
