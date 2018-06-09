/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBSearchSuggestion : PBCodable <NSSecureCoding, _SFPBSearchSuggestion> {
    NSString * _bundleIdentifier;
    NSArray * _duplicateSuggestions;
    NSString * _fbr;
    NSString * _identifier;
    bool  _previouslyEngaged;
    NSString * _query;
    NSString * _scopedSearchApplicationBundleIdentifier;
    _SFPBGraphicalFloat * _score;
    NSString * _suggestion;
    NSString * _topicIdentifier;
    int  _type;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *duplicateSuggestions;
@property (nonatomic, copy) NSString *fbr;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool previouslyEngaged;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, copy) NSString *scopedSearchApplicationBundleIdentifier;
@property (nonatomic, retain) _SFPBGraphicalFloat *score;
@property (nonatomic, copy) NSString *suggestion;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *topicIdentifier;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (void)addDuplicateSuggestions:(id)arg1;
- (id)bundleIdentifier;
- (void)clearDuplicateSuggestions;
- (id)dictionaryRepresentation;
- (id)duplicateSuggestions;
- (id)duplicateSuggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)duplicateSuggestionsCount;
- (id)fbr;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)previouslyEngaged;
- (id)query;
- (bool)readFrom:(id)arg1;
- (id)scopedSearchApplicationBundleIdentifier;
- (id)score;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDuplicateSuggestions:(id)arg1;
- (void)setFbr:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPreviouslyEngaged:(bool)arg1;
- (void)setQuery:(id)arg1;
- (void)setScopedSearchApplicationBundleIdentifier:(id)arg1;
- (void)setScore:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setTopicIdentifier:(id)arg1;
- (void)setType:(int)arg1;
- (id)suggestion;
- (id)topicIdentifier;
- (int)type;
- (void)writeTo:(id)arg1;

@end
