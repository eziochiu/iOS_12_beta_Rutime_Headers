/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICCloudThrottlingLevel : NSObject {
    double  _batchInterval;
    unsigned long long  _numberOfBatches;
}

@property (nonatomic) double batchInterval;
@property (nonatomic) unsigned long long numberOfBatches;

- (double)batchInterval;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithBatchInterval:(double)arg1 numberOfBatches:(unsigned long long)arg2;
- (unsigned long long)numberOfBatches;
- (void)setBatchInterval:(double)arg1;
- (void)setNumberOfBatches:(unsigned long long)arg1;

@end
