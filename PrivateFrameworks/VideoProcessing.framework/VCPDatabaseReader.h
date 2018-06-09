/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPDatabaseReader : NSObject {
    struct sqlite3 { } * _database;
    NSObject<OS_dispatch_queue> * _sqlSerialQueue;
}

- (void).cxx_destruct;
- (void)closeDatabase;
- (void)dealloc;
- (int)executeDatabaseBlock:(id /* block */)arg1;
- (id)init;
- (bool)isAssetBlacklisted:(id)arg1 blacklistDate:(id*)arg2;
- (int)openDatabase;
- (int)parseHeader:(struct sqlite3_stmt { }*)arg1 startColumn:(int)arg2 analysis:(id)arg3;
- (int)parseResults:(struct sqlite3_stmt { }*)arg1 typeColumn:(int)arg2 dataColumn:(int)arg3 results:(id)arg4;
- (id)queryAnalysesForAssets:(id)arg1 withTypes:(id)arg2;
- (id)queryAnalysisForAsset:(id)arg1;
- (id)queryAnalysisForAsset:(id)arg1 withTypes:(id)arg2;
- (id)queryAnalysisPropertiesForAsset:(id)arg1;
- (id)queryAssetsAnalyzedSince:(id)arg1;
- (int)queryHeaderForAsset:(id)arg1 analysis:(id*)arg2 assetId:(long long*)arg3;
- (int)queryHeadersForAssets:(id)arg1 analyses:(id)arg2 idMap:(id)arg3;
- (int)queryResultsForAssetId:(long long)arg1 analysis:(id)arg2;
- (int)queryResultsForAssetId:(long long)arg1 withTypes:(id)arg2 analysis:(id)arg3;
- (int)queryResultsForAssets:(id)arg1 withTypes:(id)arg2 batchResults:(id)arg3;

@end
