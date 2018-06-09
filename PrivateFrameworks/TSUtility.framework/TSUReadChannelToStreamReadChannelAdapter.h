/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSUReadChannelToStreamReadChannelAdapter : NSObject <TSUReadChannel, TSUStreamReadChannel> {
    <TSUReadChannel> * _readChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBarrier:(id /* block */)arg1;
- (void)close;
- (id)initWithReadChannel:(id)arg1;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (void)readWithQueue:(id)arg1 handler:(id /* block */)arg2;
- (void)setLowWater:(unsigned long long)arg1;

@end
