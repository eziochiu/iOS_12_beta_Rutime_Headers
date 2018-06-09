/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroVPAnalysisHelpers : VEiOSSharedObject {
    NSCache * _analysisInfos;
}

+ (id)_createAnalysisInfoWithVPResultDictionary:(id)arg1 asset:(id)arg2;
+ (unsigned long long)_extendedFlagsWithFlags:(unsigned long long)arg1;
+ (int)_timeInFramesWithDictionaryRepresentation:(id)arg1 naturalFrameRate:(long long)arg2;
+ (id)sharedHelpers;

- (void).cxx_destruct;
- (void)cancelFetchAnalysisInfoWithRequestID:(int)arg1;
- (void)cancelSortByAnalysisInfoScoreWithRequestID:(int)arg1;
- (void)clearCaches;
- (int)fetchAnalysisInfoWithAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)fetchAnalysisInfoWithAssets:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (int)sortByAnalysisInfoScoreWithAssets:(id)arg1 completionHandler:(id /* block */)arg2;

@end
