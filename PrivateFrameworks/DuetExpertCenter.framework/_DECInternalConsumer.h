/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECInternalConsumer : NSObject {
    unsigned long long  _category;
    unsigned long long  _consumerType;
}

@property (nonatomic) unsigned long long category;
@property (nonatomic) unsigned long long consumerType;

- (unsigned long long)category;
- (unsigned long long)consumerType;
- (id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2;
- (void)receivePrediction:(id)arg1 reply:(id /* block */)arg2;
- (void)setCategory:(unsigned long long)arg1;
- (void)setConsumerType:(unsigned long long)arg1;

@end
