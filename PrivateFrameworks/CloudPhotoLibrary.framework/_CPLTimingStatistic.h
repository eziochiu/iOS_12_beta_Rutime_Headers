/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface _CPLTimingStatistic : NSObject {
    unsigned long long  _batchCount;
    double  _duration;
    unsigned long long  _errorCount;
    unsigned long long  _recordCount;
}

- (id)description;
- (void)updateWithDuration:(double)arg1 recordCount:(unsigned long long)arg2 error:(bool)arg3;

@end
