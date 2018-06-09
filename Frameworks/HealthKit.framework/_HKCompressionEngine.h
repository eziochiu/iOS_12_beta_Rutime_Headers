/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCompressionEngine : NSObject {
    int  _algorithm;
    <_HKStreamingDestination> * _destination;
    NSMutableData * _destinationBuffer;
    int  _operation;
    NSMutableData * _sinkContent;
    struct { char *x1; unsigned long long x2; char *x3; unsigned long long x4; void *x5; } * _stream;
}

@property (nonatomic) int algorithm;
@property (nonatomic) <_HKStreamingDestination> *destination;
@property (nonatomic, retain) NSMutableData *destinationBuffer;
@property (nonatomic) int operation;
@property (nonatomic, readonly) NSMutableData *sinkContent;
@property (nonatomic) struct { char *x1; unsigned long long x2; char *x3; unsigned long long x4; void *x5; }*stream;

+ (id)processDataWithFunction:(long long)arg1 algorithm:(long long)arg2 content:(id)arg3 progressBlock:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)_decodeEngineFunction:(long long)arg1 algorithm:(long long)arg2;
- (unsigned long long)_deliverDestinationContent;
- (void)_gatherReadSinkContent:(id)arg1;
- (bool)_initializeStream;
- (bool)_processIncomingData:(const void*)arg1 length:(unsigned long long)arg2 flags:(int)arg3;
- (int)algorithm;
- (void)dealloc;
- (id)destination;
- (id)destinationBuffer;
- (id)initWithFunction:(long long)arg1 algorithm:(long long)arg2 destination:(id)arg3;
- (int)operation;
- (void)setAlgorithm:(int)arg1;
- (void)setDestination:(id)arg1;
- (void)setDestinationBuffer:(id)arg1;
- (void)setOperation:(int)arg1;
- (void)setStream:(struct { char *x1; unsigned long long x2; char *x3; unsigned long long x4; void *x5; }*)arg1;
- (id)sinkContent;
- (void)sourceContentFinished;
- (struct { char *x1; unsigned long long x2; char *x3; unsigned long long x4; void *x5; }*)stream;
- (void)writeSourceContent:(id)arg1;

@end
