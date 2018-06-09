/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKComponentPredicate : NSObject {
    struct NSString { Class x1; } * _domain;
    bool  _exactMatch;
    struct NSString { Class x1; } * _identifier;
    struct NSString { Class x1; } * _type;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) bool exactMatch;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *type;

+ (id)componentPredicateMatchingComponentIdentity:(id)arg1;
+ (id)componentPredicateWithDomain:(struct NSString { Class x1; }*)arg1 exactMatch:(bool)arg2;
+ (id)componentPredicateWithType:(struct NSString { Class x1; }*)arg1 identifier:(struct NSString { Class x1; }*)arg2;

- (void).cxx_destruct;
- (struct NSString { Class x1; }*)domain;
- (bool)exactMatch;
- (unsigned long long)hash;
- (struct NSString { Class x1; }*)identifier;
- (id)initWithDomain:(struct NSString { Class x1; }*)arg1 exactMatch:(bool)arg2;
- (id)initWithType:(struct NSString { Class x1; }*)arg1 identifier:(struct NSString { Class x1; }*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToComponentPredicate:(id)arg1;
- (bool)matchesComponentIdentity:(id)arg1;
- (struct NSString { Class x1; }*)type;

@end
