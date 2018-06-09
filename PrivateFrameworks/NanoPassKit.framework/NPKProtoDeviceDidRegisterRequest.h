/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoDeviceDidRegisterRequest : PBRequest <NSCopying> {
    NSMutableArray * _brokerRegionPushTopics;
    NSString * _primaryRegionTopic;
    NSMutableArray * _tsmRegionPushTopics;
    NSMutableArray * _tsmRegionURLs;
}

@property (nonatomic, retain) NSMutableArray *brokerRegionPushTopics;
@property (nonatomic, readonly) bool hasPrimaryRegionTopic;
@property (nonatomic, retain) NSString *primaryRegionTopic;
@property (nonatomic, retain) NSMutableArray *tsmRegionPushTopics;
@property (nonatomic, retain) NSMutableArray *tsmRegionURLs;

+ (Class)brokerRegionPushTopicsType;
+ (Class)tsmRegionPushTopicsType;
+ (Class)tsmRegionURLsType;

- (void).cxx_destruct;
- (void)addBrokerRegionPushTopics:(id)arg1;
- (void)addTsmRegionPushTopics:(id)arg1;
- (void)addTsmRegionURLs:(id)arg1;
- (id)brokerRegionPushTopics;
- (id)brokerRegionPushTopicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)brokerRegionPushTopicsCount;
- (void)clearBrokerRegionPushTopics;
- (void)clearTsmRegionPushTopics;
- (void)clearTsmRegionURLs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPrimaryRegionTopic;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)primaryRegionTopic;
- (bool)readFrom:(id)arg1;
- (void)setBrokerRegionPushTopics:(id)arg1;
- (void)setPrimaryRegionTopic:(id)arg1;
- (void)setTsmRegionPushTopics:(id)arg1;
- (void)setTsmRegionURLs:(id)arg1;
- (id)tsmRegionPushTopics;
- (id)tsmRegionPushTopicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)tsmRegionPushTopicsCount;
- (id)tsmRegionURLs;
- (id)tsmRegionURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)tsmRegionURLsCount;
- (void)writeTo:(id)arg1;

@end
