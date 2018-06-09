/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAccountChannels : NSObject <NSCopying> {
    NSString * _adamID;
    NSSet * _channelIDs;
    NSString * _providerID;
    NSDictionary * _providerInfo;
}

@property (nonatomic, copy) NSString *adamID;
@property (nonatomic, copy) NSSet *channelIDs;
@property (nonatomic, copy) NSString *providerID;
@property (nonatomic, copy) NSDictionary *providerInfo;

+ (id)deserializationResultWithData:(id)arg1;

- (void).cxx_destruct;
- (id)adamID;
- (id)channelIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)providerID;
- (id)providerInfo;
- (id)serializationResult;
- (id)serializationResultWithFormat:(unsigned long long)arg1;
- (void)setAdamID:(id)arg1;
- (void)setChannelIDs:(id)arg1;
- (void)setProviderID:(id)arg1;
- (void)setProviderInfo:(id)arg1;

@end
