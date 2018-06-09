/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSPodcastSizeEstimation : NSObject {
    bool  _empty;
    NSMutableDictionary * _sizeInfoDict;
    unsigned long long  _totalAverageSize;
    double  _totalSizeDurationRatio;
}

@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (retain) NSMutableDictionary *sizeInfoDict;

- (void).cxx_destruct;
- (id)_cachedPodcastSizeInfoDict;
- (void)_setupFromCache;
- (unsigned long long)_totalAverageSize;
- (double)_totalSizeDurationRatio;
- (bool)incrementSize:(unsigned long long)arg1 duration:(double)arg2 forFeedURL:(id)arg3;
- (id)init;
- (bool)isEmpty;
- (void)setSizeInfoDict:(id)arg1;
- (unsigned long long)sizeForFeedURL:(id)arg1 duration:(double)arg2 feedProvidedSize:(unsigned long long)arg3;
- (id)sizeInfoDict;
- (void)synchronize;

@end
