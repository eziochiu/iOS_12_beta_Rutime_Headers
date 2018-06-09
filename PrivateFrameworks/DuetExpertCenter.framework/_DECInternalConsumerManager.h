/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECInternalConsumerManager : NSObject {
    NSArray * _consumers;
}

@property (nonatomic, readonly) NSArray *consumers;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_createConsumers;
- (id)consumers;
- (id)init;

@end
