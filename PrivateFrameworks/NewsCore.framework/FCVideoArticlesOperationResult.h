/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCVideoArticlesOperationResult : NSObject {
    FCColorGradient * _backgroundColorGradient;
    NSString * _channelID;
    NTPBDiscoverMoreVideosInfo * _discoverMoreVideosInfo;
    NSArray * _headlines;
    NSString * _mutingChannelID;
    NSString * _subtitleText;
    FCColor * _titleColor;
    NSString * _titleText;
}

@property (nonatomic, copy) FCColorGradient *backgroundColorGradient;
@property (nonatomic, copy) NSString *channelID;
@property (nonatomic, copy) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (nonatomic, retain) NSArray *headlines;
@property (nonatomic, readonly, copy) NSString *mutingChannelID;
@property (nonatomic, copy) NSString *subtitleText;
@property (nonatomic, copy) FCColor *titleColor;
@property (nonatomic, copy) NSString *titleText;

- (void).cxx_destruct;
- (id)backgroundColorGradient;
- (id)channelID;
- (id)discoverMoreVideosInfo;
- (id)headlines;
- (id)initWithVideoGroupConfig:(id)arg1 headlines:(id)arg2;
- (id)mutingChannelID;
- (void)setBackgroundColorGradient:(id)arg1;
- (void)setChannelID:(id)arg1;
- (void)setDiscoverMoreVideosInfo:(id)arg1;
- (void)setHeadlines:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)subtitleText;
- (id)titleColor;
- (id)titleText;

@end
