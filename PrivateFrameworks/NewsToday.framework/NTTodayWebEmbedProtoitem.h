/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTTodayWebEmbedProtoitem : NSObject <NTTodayProtoitem> {
    NSString * _identifier;
    NTPBTodaySectionConfigWebEmbed * _webEmbed;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NTPBTodaySectionConfigWebEmbed *webEmbed;

- (void).cxx_destruct;
- (id)assetHandlesWithOperationInfo:(id)arg1 forLeadingCellAppearance:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 webEmbed:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)itemWithContentContext:(id)arg1 operationInfo:(id)arg2 sectionDescriptor:(id)arg3 assetFileURLsByRemoteURL:(id)arg4 forLeadingCellAppearance:(bool)arg5 preferredDynamicSlotAllocation:(unsigned long long)arg6;
- (id)webEmbed;

@end
