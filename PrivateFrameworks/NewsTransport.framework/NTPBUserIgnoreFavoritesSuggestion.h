/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBUserIgnoreFavoritesSuggestion : PBCodable <NSCopying> {
    struct { 
        unsigned int ignoreLocation : 1; 
        unsigned int ignoredFeedType : 1; 
        unsigned int suggestionPositionWhenIgnored : 1; 
    }  _has;
    int  _ignoreLocation;
    NSString * _ignoredFeedId;
    int  _ignoredFeedType;
    int  _suggestionPositionWhenIgnored;
}

@property (nonatomic) bool hasIgnoreLocation;
@property (nonatomic, readonly) bool hasIgnoredFeedId;
@property (nonatomic) bool hasIgnoredFeedType;
@property (nonatomic) bool hasSuggestionPositionWhenIgnored;
@property (nonatomic) int ignoreLocation;
@property (nonatomic, retain) NSString *ignoredFeedId;
@property (nonatomic) int ignoredFeedType;
@property (nonatomic) int suggestionPositionWhenIgnored;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIgnoreLocation;
- (bool)hasIgnoredFeedId;
- (bool)hasIgnoredFeedType;
- (bool)hasSuggestionPositionWhenIgnored;
- (unsigned long long)hash;
- (int)ignoreLocation;
- (id)ignoredFeedId;
- (int)ignoredFeedType;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIgnoreLocation:(bool)arg1;
- (void)setHasIgnoredFeedType:(bool)arg1;
- (void)setHasSuggestionPositionWhenIgnored:(bool)arg1;
- (void)setIgnoreLocation:(int)arg1;
- (void)setIgnoredFeedId:(id)arg1;
- (void)setIgnoredFeedType:(int)arg1;
- (void)setSuggestionPositionWhenIgnored:(int)arg1;
- (int)suggestionPositionWhenIgnored;
- (void)writeTo:(id)arg1;

@end
