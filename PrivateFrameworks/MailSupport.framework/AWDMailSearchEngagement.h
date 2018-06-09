/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface AWDMailSearchEngagement : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _atoms;
    NSMutableArray * _engagements;
    struct { 
        unsigned int numSearchResults : 1; 
        unsigned int searchScope : 1; 
    }  _has;
    unsigned long long  _numSearchResults;
    int  _searchScope;
    AWDMailUserSuggestionsEngagment * _suggestionsEngagement;
}

@property (nonatomic, readonly) int*atoms;
@property (nonatomic, readonly) unsigned long long atomsCount;
@property (nonatomic, retain) NSMutableArray *engagements;
@property (nonatomic) bool hasNumSearchResults;
@property (nonatomic) bool hasSearchScope;
@property (nonatomic, readonly) bool hasSuggestionsEngagement;
@property (nonatomic) unsigned long long numSearchResults;
@property (nonatomic) int searchScope;
@property (nonatomic, retain) AWDMailUserSuggestionsEngagment *suggestionsEngagement;

+ (Class)engagementsType;

- (void).cxx_destruct;
- (int)StringAsAtoms:(id)arg1;
- (int)StringAsSearchScope:(id)arg1;
- (void)addAtoms:(int)arg1;
- (void)addEngagements:(id)arg1;
- (int*)atoms;
- (id)atomsAsString:(int)arg1;
- (int)atomsAtIndex:(unsigned long long)arg1;
- (unsigned long long)atomsCount;
- (void)clearAtoms;
- (void)clearEngagements;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)engagements;
- (id)engagementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)engagementsCount;
- (bool)hasNumSearchResults;
- (bool)hasSearchScope;
- (bool)hasSuggestionsEngagement;
- (unsigned long long)hash;
- (id)initWithAtoms:(id)arg1 searchScope:(bool)arg2 suggestionsEngagement:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numSearchResults;
- (bool)readFrom:(id)arg1;
- (int)searchScope;
- (id)searchScopeAsString:(int)arg1;
- (void)setAtoms:(int*)arg1 count:(unsigned long long)arg2;
- (void)setEngagements:(id)arg1;
- (void)setHasNumSearchResults:(bool)arg1;
- (void)setHasSearchScope:(bool)arg1;
- (void)setNumSearchResults:(unsigned long long)arg1;
- (void)setSearchScope:(int)arg1;
- (void)setSuggestionsEngagement:(id)arg1;
- (id)suggestionsEngagement;
- (void)writeTo:(id)arg1;

@end
