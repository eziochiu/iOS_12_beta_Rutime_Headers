/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDHarvestQueueFileReader : NSObject {
    int  _fileId;
    NSObject<OS_dispatch_io> * _io;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) int fileId;

- (void).cxx_destruct;
- (void)dealloc;
- (int)fileId;
- (id)initWithDirectory:(id)arg1 fileId:(int)arg2 tryLater:(bool*)arg3;
- (void)read:(struct { int x1; int x2; unsigned int x3; })arg1 callback:(id /* block */)arg2;

@end
