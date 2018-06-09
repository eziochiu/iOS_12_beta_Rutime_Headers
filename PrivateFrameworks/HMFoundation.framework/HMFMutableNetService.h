/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFMutableNetService : HMFNetService {
    unsigned long long  _port;
    id /* block */  _publishBlock;
    bool  _publishing;
}

@property (nonatomic, copy) NSDictionary *TXTRecord;
@property (nonatomic) unsigned long long port;
@property (nonatomic, copy) id /* block */ publishBlock;
@property (getter=isPublishing) bool publishing;

- (void).cxx_destruct;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(unsigned long long)arg4;
- (id)initWithNetService:(id)arg1;
- (id)internal;
- (bool)isPublishing;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (unsigned long long)port;
- (id /* block */)publishBlock;
- (void)removeTXTRecordValueForKey:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setPort:(unsigned long long)arg1;
- (void)setPublishBlock:(id /* block */)arg1;
- (void)setPublishing:(bool)arg1;
- (void)setTXTRecord:(id)arg1;
- (void)setTXTRecordValue:(id)arg1 forKey:(id)arg2;
- (void)startPublishingWithCompletionHandler:(id /* block */)arg1;
- (void)stopPublishing;
- (void)updateTXTRecord;
- (void)updateTXTRecordWithData:(id)arg1;

@end