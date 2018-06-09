/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleBootstrapContext : NSObject {
    unsigned long long  _bootstrapType;
    id /* block */  _cancelBlock;
    PXPeopleNameSelection * _nameSelection;
    <PXCMMPersonSuggestion> * _personSuggestion;
    id /* block */  _preCommitBlock;
    <PXPeopleSuggestionManagerDataSource> * _prefetchedDataSource;
    bool  _skipInitialAction;
    <PXPerson> * _sourcePerson;
    PXPeopleSuggestionManager * _suggestionManager;
    <PXPerson> * _targetPerson;
    bool  _wantsMergeCandidateSuggestions;
    bool  _wantsNaming;
    bool  _wantsPostNaming;
}

@property unsigned long long bootstrapType;
@property (nonatomic, copy) id /* block */ cancelBlock;
@property (nonatomic, readonly) NSString *displayName;
@property (retain) PXPeopleNameSelection *nameSelection;
@property (nonatomic, retain) <PXCMMPersonSuggestion> *personSuggestion;
@property (nonatomic, copy) id /* block */ preCommitBlock;
@property (nonatomic, retain) <PXPeopleSuggestionManagerDataSource> *prefetchedDataSource;
@property (nonatomic) bool skipInitialAction;
@property (retain) <PXPerson> *sourcePerson;
@property (retain) PXPeopleSuggestionManager *suggestionManager;
@property (retain) <PXPerson> *targetPerson;
@property (nonatomic) bool wantsMergeCandidateSuggestions;
@property (nonatomic) bool wantsNaming;
@property (nonatomic) bool wantsPostNaming;

+ (id)contextWithPerson:(id)arg1 type:(unsigned long long)arg2;
+ (id)contextWithPersonSuggestion:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)bootstrapType;
- (id /* block */)cancelBlock;
- (id)displayName;
- (id)init;
- (id)nameSelection;
- (id)personSuggestion;
- (id /* block */)preCommitBlock;
- (id)prefetchedDataSource;
- (void)setBootstrapType:(unsigned long long)arg1;
- (void)setCancelBlock:(id /* block */)arg1;
- (void)setNameSelection:(id)arg1;
- (void)setPersonSuggestion:(id)arg1;
- (void)setPreCommitBlock:(id /* block */)arg1;
- (void)setPrefetchedDataSource:(id)arg1;
- (void)setSkipInitialAction:(bool)arg1;
- (void)setSourcePerson:(id)arg1;
- (void)setSuggestionManager:(id)arg1;
- (void)setTargetPerson:(id)arg1;
- (void)setWantsMergeCandidateSuggestions:(bool)arg1;
- (void)setWantsNaming:(bool)arg1;
- (void)setWantsPostNaming:(bool)arg1;
- (bool)skipInitialAction;
- (id)sourcePerson;
- (id)suggestionManager;
- (id)targetPerson;
- (bool)wantsMergeCandidateSuggestions;
- (bool)wantsNaming;
- (bool)wantsPostNaming;

@end
