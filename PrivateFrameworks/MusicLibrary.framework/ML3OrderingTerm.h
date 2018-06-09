/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3OrderingTerm : NSObject <NSCopying, NSSecureCoding> {
    NSString * _collation;
    int  _direction;
    NSString * _property;
}

@property (nonatomic, readonly) NSString *collation;
@property (nonatomic, readonly) int direction;
@property (nonatomic, readonly) NSString *property;

+ (id)orderingTermWithProperty:(id)arg1;
+ (id)orderingTermWithProperty:(id)arg1 direction:(int)arg2;
+ (id)reversedTerms:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)collation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)direction;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1;
- (id)initWithProperty:(id)arg1 direction:(int)arg2;
- (id)initWithProperty:(id)arg1 direction:(int)arg2 collation:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)property;

@end
