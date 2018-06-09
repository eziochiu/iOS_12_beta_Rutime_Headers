/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLTernaryExpressionIntermediate : NSSQLExpressionIntermediate {
    NSSQLEntity * _disambiguatingEntity;
    NSArray * _disambiguationKeypath;
    bool  _disambiguationKeypathHasToMany;
}

- (id)_generateSQLForPredicate:(id)arg1 inContext:(id)arg2;
- (void)dealloc;
- (id)disambiguatingEntity;
- (id)disambiguationKeypath;
- (bool)disambiguationKeypathHasToMany;
- (id)generateSQLStringInContext:(id)arg1;
- (void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(bool)arg3;

@end
