/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _UTTypeQuery : _LSQuery {
    unsigned long long  _flags;
}

@property (setter=_setResolveInactiveDeclarations:, nonatomic) bool _resolveInactiveDeclarations;

+ (id)typeQueryForAllDeclaredIdentifiers;
+ (id)typeQueryWithDescendantsOfIdentifier:(id)arg1 searchDepthLimit:(unsigned long long)arg2;
+ (id)typeQueryWithIdentifier:(id)arg1;
+ (id)typeQueryWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3;
+ (id)typeQueryWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3 limit:(long long)arg4;

- (bool)_resolveInactiveDeclarations;
- (void)_setResolveInactiveDeclarations:(bool)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)resolve;

@end
