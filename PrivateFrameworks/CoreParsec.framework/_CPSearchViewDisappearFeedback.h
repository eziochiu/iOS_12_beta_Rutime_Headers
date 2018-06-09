/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPSearchViewDisappearFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPSearchViewDisappearFeedback> {
    unsigned long long  _timestamp;
    int  _viewDisappearEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) bool requiresQueryId;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int viewDisappearEvent;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setViewDisappearEvent:(int)arg1;
- (unsigned long long)timestamp;
- (int)viewDisappearEvent;
- (void)writeTo:(id)arg1;

@end
