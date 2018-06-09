/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPasteboardReadChannel : NSObject <TSUStreamReadChannel> {
    TSPPasteboard * _pasteboard;
    NSString * _pasteboardType;
    NSObject<OS_dispatch_queue> * _readQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (void)close;
- (id)init;
- (id)initWithPasteboard:(id)arg1 pasteboardType:(id)arg2;
- (void)readWithHandler:(id /* block */)arg1;

@end