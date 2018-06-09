/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudPhotoLibraryBatchContainer : NSObject {
    CPLChangeBatch * _batch;
    bool  _reachedMinSplit;
    unsigned long long  _retryCount;
    bool  _wasFixed;
    bool  _wasSplit;
}

@property (nonatomic, retain) CPLChangeBatch *batch;
@property (nonatomic) bool reachedMinSplit;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) bool wasFixed;
@property (nonatomic) bool wasSplit;

- (void)addRecord:(id)arg1;
- (id)batch;
- (id)batchesSplitForError;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)incrementRetryCount;
- (id)init;
- (id)lastAddedRecord;
- (bool)reachedMinSplit;
- (unsigned long long)retryCount;
- (void)setBatch:(id)arg1;
- (void)setReachedMinSplit:(bool)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setWasFixed:(bool)arg1;
- (void)setWasSplit:(bool)arg1;
- (bool)wasFixed;
- (bool)wasSplit;

@end
