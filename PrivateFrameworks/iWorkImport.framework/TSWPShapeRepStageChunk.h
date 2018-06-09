/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPShapeRepStageChunk : NSObject {
    long long  _stageIndex;
    NSArray * _storageRanges;
}

@property (nonatomic) long long stageIndex;
@property (nonatomic, retain) NSArray *storageRanges;

- (void)dealloc;
- (id)description;
- (void)setStageIndex:(long long)arg1;
- (void)setStorageRanges:(id)arg1;
- (long long)stageIndex;
- (id)storageRanges;

@end
