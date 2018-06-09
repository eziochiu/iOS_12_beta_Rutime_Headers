/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUWriteRequest : NSObject {
    struct iovec { void *x1; unsigned long long x2; } * _bytesIOArray;
    unsigned long long  _bytesIOCount;
    unsigned long long  _bytesIOMaxCount;
    id /* block */  _completion;
    NSArray * _dataArray;
    bool  _endOfData;
    NSError * _error;
    int  _ion;
    struct iovec { void *x1; unsigned long long x2; } * _iop;
    struct iovec { 
        void *iov_base; 
        unsigned long long iov_len; 
    }  _iov;
    unsigned long long  _offset;
}

@property (nonatomic, readonly) struct iovec { void *x1; unsigned long long x2; }*bytesIOArray;
@property (nonatomic) unsigned long long bytesIOCount;
@property (nonatomic, readonly) unsigned long long bytesIOMaxCount;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSArray *dataArray;
@property (nonatomic) bool endOfData;
@property (nonatomic, readonly) NSError *error;

- (void).cxx_destruct;
- (struct iovec { void *x1; unsigned long long x2; }*)bytesIOArray;
- (unsigned long long)bytesIOCount;
- (unsigned long long)bytesIOMaxCount;
- (id /* block */)completion;
- (id)dataArray;
- (bool)endOfData;
- (id)error;
- (id)init;
- (void)setBytesIOCount:(unsigned long long)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDataArray:(id)arg1;
- (void)setEndOfData:(bool)arg1;

@end
