/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSIntervalFilter : NSObject {
    unsigned long long  _expectedInterval;
    unsigned long long  _filterCount;
    unsigned long long  _filterOffset;
    unsigned char  _filterSize;
    struct IOTS_U128 { 
        unsigned long long lo; 
        unsigned long long hi; 
    }  _filteredOffset;
    struct IOTS_U128 { 
        unsigned long long lo; 
        unsigned long long hi; 
    }  _filteredSnapshot;
    unsigned long long * _filteredTimestamps;
    unsigned int  _multiIntervalCount;
    NSObject<OS_dispatch_queue> * _syncQueue;
    unsigned long long  _timestampCount;
    unsigned int  _timestampIndex;
    unsigned long long  _timestampIntervals;
    long long  _validEntry;
}

@property (nonatomic, readonly) unsigned long long filterCount;
@property (nonatomic, readonly) unsigned long long multiIntervalTime;

- (id).cxx_construct;
- (unsigned long long)_calculateNewTimestamp:(unsigned long long)arg1;
- (unsigned long long)addTimestamp:(unsigned long long)arg1;
- (unsigned long long)addTimestamp:(unsigned long long)arg1 entry:(long long*)arg2;
- (void)changeToNewFilterSize:(unsigned char)arg1;
- (void)dealloc;
- (unsigned long long)filterCount;
- (unsigned long long)filterCountForEntry:(long long)arg1;
- (id)initWithExpectedInterval:(unsigned long long)arg1 multiIntervalCount:(unsigned int)arg2 filterSize:(unsigned char)arg3;
- (unsigned long long)multiIntervalTime;
- (unsigned long long)multiIntervalTimeForEntry:(long long)arg1;
- (void)resetFilter;
- (void)resetFilterWithNewExpectedInterval:(unsigned long long)arg1;
- (void)resetFilterWithNewExpectedInterval:(unsigned long long)arg1 multiIntervalCount:(unsigned int)arg2;

@end
