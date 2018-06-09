/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPCardSectionForFeedback : PBCodable <NSSecureCoding, _CPCardSectionForFeedback> {
    NSString * _actionDestination;
    NSString * _actionTarget;
    NSString * _cardSectionId;
    NSString * _resultId;
}

@property (nonatomic, copy) NSString *actionDestination;
@property (nonatomic, copy) NSString *actionTarget;
@property (nonatomic, copy) NSString *cardSectionId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *resultId;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionDestination;
- (id)actionTarget;
- (id)cardSectionId;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)resultId;
- (void)setActionDestination:(id)arg1;
- (void)setActionTarget:(id)arg1;
- (void)setCardSectionId:(id)arg1;
- (void)setResultId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
