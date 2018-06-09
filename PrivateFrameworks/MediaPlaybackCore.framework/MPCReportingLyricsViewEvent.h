/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCReportingLyricsViewEvent : NSObject {
    NSString * _featureName;
    MPModelPlayEvent * _modelPlayEvent;
    MPModelSong * _modelSong;
    NSData * _recommendationData;
    long long  _sourceType;
    double  _visibleDuration;
}

@property (nonatomic, copy) NSString *featureName;
@property (nonatomic, retain) MPModelPlayEvent *modelPlayEvent;
@property (nonatomic, retain) MPModelSong *modelSong;
@property (nonatomic, copy) NSData *recommendationData;
@property (nonatomic) long long sourceType;
@property (nonatomic) double visibleDuration;

- (void).cxx_destruct;
- (id)featureName;
- (id)modelPlayEvent;
- (id)modelSong;
- (id)recommendationData;
- (void)setFeatureName:(id)arg1;
- (void)setModelPlayEvent:(id)arg1;
- (void)setModelSong:(id)arg1;
- (void)setRecommendationData:(id)arg1;
- (void)setSourceType:(long long)arg1;
- (void)setVisibleDuration:(double)arg1;
- (long long)sourceType;
- (double)visibleDuration;

@end
