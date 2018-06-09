/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoQueueTSMConnectionRequest : PBRequest <NSCopying> {
    NSString * _pushTopic;
}

@property (nonatomic, readonly) bool hasPushTopic;
@property (nonatomic, retain) NSString *pushTopic;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPushTopic;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pushTopic;
- (bool)readFrom:(id)arg1;
- (void)setPushTopic:(id)arg1;
- (void)writeTo:(id)arg1;

@end
