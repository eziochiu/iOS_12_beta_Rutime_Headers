/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSnappyReadChannel : NSObject <TSUStreamReadChannel> {
    <TSUStreamReadChannel> * _readChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1;
- (bool)processData:(id*)arg1 isDone:(bool)arg2 handler:(id /* block */)arg3;
- (void)readWithHandler:(id /* block */)arg1;
- (id)uncompressData:(id)arg1;
- (id)uncompressDataFromSource:(struct SnappySource { int (**x1)(); id x2; unsigned long long x3; id x4; unsigned long long x5; char *x6; }*)arg1;

@end
