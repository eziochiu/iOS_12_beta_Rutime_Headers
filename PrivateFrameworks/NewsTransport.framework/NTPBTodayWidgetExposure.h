/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTodayWidgetExposure : PBCodable <NSCopying> {
    struct { 
        unsigned int widgetAppearanceType : 1; 
        unsigned int widgetArticleCount : 1; 
        unsigned int widgetHeadlineExposureCount : 1; 
    }  _has;
    int  _widgetAppearanceType;
    int  _widgetArticleCount;
    int  _widgetHeadlineExposureCount;
    NSMutableArray * _widgetPersonalizationFeatureCTRPairs;
    NSMutableArray * _widgetSectionsArticleCountPairs;
}

@property (nonatomic) bool hasWidgetAppearanceType;
@property (nonatomic) bool hasWidgetArticleCount;
@property (nonatomic) bool hasWidgetHeadlineExposureCount;
@property (nonatomic) int widgetAppearanceType;
@property (nonatomic) int widgetArticleCount;
@property (nonatomic) int widgetHeadlineExposureCount;
@property (nonatomic, retain) NSMutableArray *widgetPersonalizationFeatureCTRPairs;
@property (nonatomic, retain) NSMutableArray *widgetSectionsArticleCountPairs;

+ (Class)widgetPersonalizationFeatureCTRPairType;
+ (Class)widgetSectionsArticleCountPairType;

- (void).cxx_destruct;
- (void)addWidgetPersonalizationFeatureCTRPair:(id)arg1;
- (void)addWidgetSectionsArticleCountPair:(id)arg1;
- (void)clearWidgetPersonalizationFeatureCTRPairs;
- (void)clearWidgetSectionsArticleCountPairs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasWidgetAppearanceType;
- (bool)hasWidgetArticleCount;
- (bool)hasWidgetHeadlineExposureCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasWidgetAppearanceType:(bool)arg1;
- (void)setHasWidgetArticleCount:(bool)arg1;
- (void)setHasWidgetHeadlineExposureCount:(bool)arg1;
- (void)setWidgetAppearanceType:(int)arg1;
- (void)setWidgetArticleCount:(int)arg1;
- (void)setWidgetHeadlineExposureCount:(int)arg1;
- (void)setWidgetPersonalizationFeatureCTRPairs:(id)arg1;
- (void)setWidgetSectionsArticleCountPairs:(id)arg1;
- (int)widgetAppearanceType;
- (int)widgetArticleCount;
- (int)widgetHeadlineExposureCount;
- (id)widgetPersonalizationFeatureCTRPairAtIndex:(unsigned long long)arg1;
- (id)widgetPersonalizationFeatureCTRPairs;
- (unsigned long long)widgetPersonalizationFeatureCTRPairsCount;
- (id)widgetSectionsArticleCountPairAtIndex:(unsigned long long)arg1;
- (id)widgetSectionsArticleCountPairs;
- (unsigned long long)widgetSectionsArticleCountPairsCount;
- (void)writeTo:(id)arg1;

@end
