/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPaywallDescription : PBCodable <NSCopying> {
    NSString * _channelPaywall;
    NSString * _hardPaywall;
    NSString * _leakyPaywall;
    NSString * _promotionalPaywall;
}

@property (nonatomic, retain) NSString *channelPaywall;
@property (nonatomic, retain) NSString *hardPaywall;
@property (nonatomic, readonly) bool hasChannelPaywall;
@property (nonatomic, readonly) bool hasHardPaywall;
@property (nonatomic, readonly) bool hasLeakyPaywall;
@property (nonatomic, readonly) bool hasPromotionalPaywall;
@property (nonatomic, retain) NSString *leakyPaywall;
@property (nonatomic, retain) NSString *promotionalPaywall;

- (id)channelPaywall;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)hardPaywall;
- (bool)hasChannelPaywall;
- (bool)hasHardPaywall;
- (bool)hasLeakyPaywall;
- (bool)hasPromotionalPaywall;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)leakyPaywall;
- (void)mergeFrom:(id)arg1;
- (id)promotionalPaywall;
- (bool)readFrom:(id)arg1;
- (void)setChannelPaywall:(id)arg1;
- (void)setHardPaywall:(id)arg1;
- (void)setLeakyPaywall:(id)arg1;
- (void)setPromotionalPaywall:(id)arg1;
- (void)writeTo:(id)arg1;

@end
