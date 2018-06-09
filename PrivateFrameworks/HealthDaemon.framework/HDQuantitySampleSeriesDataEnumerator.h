/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQuantitySampleSeriesDataEnumerator : NSObject {
    long long  _HFDKey;
    NSUUID * _UUID;
    unsigned long long  _bufferSize;
    long long  _count;
    struct deque<std::__1::tuple<double, double>, std::__1::allocator<std::__1::tuple<double, double> > > { 
        struct __split_buffer<std::__1::tuple<double, double> *, std::__1::allocator<std::__1::tuple<double, double> *> > { 
            struct tuple<double, double> {} **__first_; 
            struct tuple<double, double> {} **__begin_; 
            struct tuple<double, double> {} **__end_; 
            struct __compressed_pair<std::__1::tuple<double, double> **, std::__1::allocator<std::__1::tuple<double, double> *> > { 
                struct tuple<double, double> {} **__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::tuple<double, double> > > { 
            unsigned long long __value_; 
        } __size_; 
    }  _data;
    long long  _dataTypeCode;
    NSError * _fatalError;
    bool  _hasFetchedAllData;
    bool  _hasFetchedData;
    long long  _index;
    double  _lastDatumTime;
    double  _lastFetchedDatumTime;
    double  _nextStartTime;
    struct ObjectIdentifier { 
        long long objectType; 
        unsigned long long identifier; 
    }  _objectIdentifier;
    long long  _persistentID;
    long long  _sourceID;
    double  _startTime;
    HDDatabaseTransaction * _transaction;
}

@property (nonatomic, readonly) long long HFDKey;
@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long dataTypeCode;
@property (nonatomic, readonly) bool done;
@property (nonatomic, readonly) long long persistentID;
@property (nonatomic, readonly) long long sourceID;
@property (nonatomic, readonly) double startTime;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)HFDKey;
- (id)UUID;
- (bool)_addToBufferTimestamp:(double)arg1 value:(double)arg2;
- (bool)_fillValueBufferWithError:(id*)arg1;
- (double)_firstDatumTime;
- (long long)compare:(id)arg1;
- (long long)count;
- (long long)dataTypeCode;
- (id)description;
- (bool)done;
- (bool)enumerateDataToTime:(double)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (id)initWithTransaction:(id)arg1 persistentID:(long long)arg2 dataTypeCode:(long long)arg3 UUID:(id)arg4 startTime:(double)arg5 count:(long long)arg6 sourceID:(long long)arg7 HFDKey:(long long)arg8 bufferSize:(unsigned long long)arg9;
- (double)nextDatumTime;
- (long long)persistentID;
- (long long)sourceID;
- (double)startTime;

@end
