/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {
    NSSQLEntity * _disambiguatingEntity;
    NSArray * _disambiguationKeypath;
    bool  _disambiguationKeypathHasToMany;
    NSMutableArray * _subclauses;
}

- (id)_generateMulticlauseStringInContext:(id)arg1;
- (void)dealloc;
- (id)disambiguatingEntity;
- (id)disambiguationKeypath;
- (bool)disambiguationKeypathHasToMany;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;
- (bool)isOrScoped;
- (void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(bool)arg3;

@end
