/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKLStreamTrafficObserver : CKLStreamObserver {
    NSObject<OS_dispatch_queue> * _printQueue;
    NSMutableDictionary * _requestDictionary;
    id /* block */  _requestParsedBlock;
}

@property (retain) NSObject<OS_dispatch_queue> *printQueue;
@property (retain) NSMutableDictionary *requestDictionary;
@property (nonatomic, copy) id /* block */ requestParsedBlock;

- (void).cxx_destruct;
- (void)eventMatched:(id)arg1;
- (void)finish;
- (id)initWithLogTypes:(unsigned long long)arg1;
- (void)parseRequestArrayAndPrint:(id)arg1;
- (id)parserFromConfigurationMessage:(id)arg1;
- (id)printQueue;
- (id)requestDictionary;
- (id /* block */)requestParsedBlock;
- (void)setPrintQueue:(id)arg1;
- (void)setRequestDictionary:(id)arg1;
- (void)setRequestParsedBlock:(id /* block */)arg1;

@end
