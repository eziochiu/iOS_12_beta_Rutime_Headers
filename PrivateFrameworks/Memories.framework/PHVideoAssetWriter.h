/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PHVideoAssetWriter : PHAssetWriter {
    AVAssetExportSession * _exportSession;
}

@property (nonatomic, retain) AVAssetExportSession *exportSession;

- (void).cxx_destruct;
- (unsigned long long)_estimatedOutputSizeWithError:(id*)arg1;
- (unsigned long long)estimatedOutputSizeWithError:(id*)arg1;
- (id)exportSession;
- (id)request;
- (id)requestWithNetworkAccess:(bool)arg1;
- (void)setExportSession:(id)arg1;
- (id)transfer;

@end
