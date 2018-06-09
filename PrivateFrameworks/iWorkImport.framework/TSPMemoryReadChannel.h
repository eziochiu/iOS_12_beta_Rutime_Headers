/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPMemoryReadChannel : NSObject <TSUReadChannel> {
    NSObject<OS_dispatch_data> * _dispatchData;
    NSObject<OS_dispatch_queue> * _readQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (void)addBarrier:(id /* block */)arg1;
- (void)close;
- (id)init;
- (id)initWithDispatchData:(id)arg1;
- (id)initWithNSData:(id)arg1;
- (bool)isValid;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (void)readWithHandler:(id /* block */)arg1;
- (void)setLowWater:(unsigned long long)arg1;

@end
