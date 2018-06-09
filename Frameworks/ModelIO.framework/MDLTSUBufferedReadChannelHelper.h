/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLTSUBufferedReadChannelHelper : NSObject <MDLTSUStreamReadChannel> {
    MDLTSUBufferedReadChannel * _bufferedReadChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (id)init;
- (id)initWithBufferedReadChannel:(id)arg1;
- (void)readWithHandler:(id /* block */)arg1;

@end
