/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLMarsSubBatchLayout : NFLSubBatchLayout {
    NFLSingleComponentLayout * _bottomComponent;
    NFLSingleComponentLayout * _bottomLeftComponent;
    NFLSingleComponentLayout * _bottomRightComponent;
    NFLSingleComponentLayout * _largeComponent;
    NFLSingleComponentLayout * _topLeftComponent;
    NFLSingleComponentLayout * _topRightComponent;
}

@property (nonatomic, retain) NFLSingleComponentLayout *bottomComponent;
@property (nonatomic, retain) NFLSingleComponentLayout *bottomLeftComponent;
@property (nonatomic, retain) NFLSingleComponentLayout *bottomRightComponent;
@property (nonatomic, retain) NFLSingleComponentLayout *largeComponent;
@property (nonatomic, retain) NFLSingleComponentLayout *topLeftComponent;
@property (nonatomic, retain) NFLSingleComponentLayout *topRightComponent;

- (void).cxx_destruct;
- (id)bottomComponent;
- (id)bottomLeftComponent;
- (id)bottomRightComponent;
- (bool)isValid;
- (id)largeComponent;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (double)rank;
- (unsigned long long)rowSpan;
- (void)setBottomComponent:(id)arg1;
- (void)setBottomLeftComponent:(id)arg1;
- (void)setBottomRightComponent:(id)arg1;
- (void)setLargeComponent:(id)arg1;
- (void)setTopLeftComponent:(id)arg1;
- (void)setTopRightComponent:(id)arg1;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;
- (id)topLeftComponent;
- (id)topRightComponent;

@end
