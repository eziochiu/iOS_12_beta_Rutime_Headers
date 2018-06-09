/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPSkipSearchFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPSkipSearchFeedback> {
    NSString * _input;
    unsigned long long  _timestamp;
    int  _triggerEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *input;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) bool requiresQueryId;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithTriggerEvent:(int)arg1 input:(id)arg2;
- (id)input;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (void)setInput:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (void)writeTo:(id)arg1;

@end
