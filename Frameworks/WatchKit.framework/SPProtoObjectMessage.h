/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPProtoObjectMessage : PBCodable <NSCopying> {
    NSString * _identifier;
}

@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)sockPuppetMessageForAssetDestroy;
- (id)sockPuppetMessageForPlayerItemDestroy;
- (id)sockPuppetMessageForPlayerItemGetCurrentTime;
- (id)sockPuppetMessageForPlayerItemNotifyDidPlayToEndTime;
- (id)sockPuppetMessageForPlayerItemNotifyFailedToPlayToEndTime;
- (id)sockPuppetMessageForPlayerItemNotifyTimeJumped;
- (id)sockPuppetMessageForQueuePlayerAdvanceToNextItem;
- (id)sockPuppetMessageForQueuePlayerDestroy;
- (id)sockPuppetMessageForQueuePlayerRemoveAllItems;
- (void)writeTo:(id)arg1;

@end
