/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPCardViewAppearFeedback : PBCodable <NSSecureCoding, _CPCardViewAppearFeedback, _CPProcessableFeedback> {
    _CPCardForFeedback * _card;
    NSString * _fbr;
    unsigned int  _level;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) _CPCardForFeedback *card;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *fbr;
@property (nonatomic, readonly) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int level;
@property (nonatomic, readonly) bool requiresQueryId;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)card;
- (id)dictionaryRepresentation;
- (id)fbr;
- (id)feedbackJSON;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)level;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (void)setCard:(id)arg1;
- (void)setFbr:(id)arg1;
- (void)setLevel:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
