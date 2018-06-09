/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUAdMetadata : NSObject <SXPrerollAdMetadata> {
    NSString * _adCampaignId;
    NSString * _adCreativeId;
    NSString * _adImpressionIdentifier;
    NSString * _adLineId;
}

@property (nonatomic, readonly) NSString *adCampaignId;
@property (nonatomic, readonly) NSString *adCreativeId;
@property (nonatomic, readonly) NSString *adImpressionIdentifier;
@property (nonatomic, readonly) NSString *adLineId;

- (void).cxx_destruct;
- (id)adCampaignId;
- (id)adCreativeId;
- (id)adImpressionIdentifier;
- (id)adLineId;
- (id)initWithAdImpressionIdentifier:(id)arg1 adCampaignId:(id)arg2 adLineId:(id)arg3 adCreativeId:(id)arg4;

@end
