/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPSearchSuggestionForFeedback : PBCodable <NSSecureCoding, _CPSearchSuggestionForFeedback> {
    NSString * _fbr;
    NSString * _identifier;
    NSString * _query;
    double  _score;
    NSString * _suggestion;
    int  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fbr;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *query;
@property (nonatomic) double score;
@property (nonatomic, copy) NSString *suggestion;
@property (readonly) Class superclass;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)fbr;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)query;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setFbr:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setType:(int)arg1;
- (id)suggestion;
- (int)type;
- (void)writeTo:(id)arg1;

@end
