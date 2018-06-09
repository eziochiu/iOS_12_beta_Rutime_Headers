/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLSubBatchLayout : NSObject <NFLFeedComponentLayout> {
    NFLFeedSettings * _feedSettings;
    NSArray * _tileInfosUsed;
    bool  _valid;
}

@property (nonatomic, readonly) unsigned long long columnSpan;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NFLFeedSettings *feedSettings;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *layoutDataByTileInfo;
@property (nonatomic, readonly) double rank;
@property (nonatomic, readonly) unsigned long long rowSpan;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *tileInfosUsed;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)subBatchFromHeadlines:(id)arg1 feedSettings:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)columnSpan;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feedSettings;
- (id)init;
- (id)initWithFeedSettings:(id)arg1;
- (bool)isValid;
- (id)layoutDataByTileInfo;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (id)layoutInfosWithFeedSettings:(id)arg1;
- (double)rank;
- (unsigned long long)rowSpan;
- (void)setFeedSettings:(id)arg1;
- (void)setTileInfosUsed:(id)arg1;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;

@end
