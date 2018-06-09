/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECPredictionStoreQueuedResult : NSObject {
    unsigned long long  _category;
    unsigned long long  _consumer;
    NSData * _result;
}

@property (nonatomic) unsigned long long category;
@property (nonatomic) unsigned long long consumer;
@property (nonatomic, retain) NSData *result;

- (void).cxx_destruct;
- (unsigned long long)category;
- (unsigned long long)consumer;
- (id)result;
- (void)setCategory:(unsigned long long)arg1;
- (void)setConsumer:(unsigned long long)arg1;
- (void)setResult:(id)arg1;

@end
