/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPCBAEngagementFeedback : PBCodable <NSSecureCoding, _CPCBAEngagementFeedback, _CPProcessableFeedback> {
    int  _cbaType;
    unsigned long long  _queryId;
    unsigned long long  _timestamp;
    NSString * _url;
}

@property (nonatomic) int cbaType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic, readonly) bool requiresQueryId;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, copy) NSString *url;

- (void).cxx_destruct;
- (int)cbaType;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)queryId;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (void)setCbaType:(int)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (unsigned long long)timestamp;
- (id)url;
- (void)writeTo:(id)arg1;

@end