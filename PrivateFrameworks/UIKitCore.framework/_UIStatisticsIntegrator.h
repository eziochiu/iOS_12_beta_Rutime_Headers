/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatisticsIntegrator : NSObject {
    NSObject<OS_dispatch_queue> * _reportingQueue;
}

+ (void)createSharedInstanceIfNecessary;
+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)batchRecord:(id /* block */)arg1;
- (void)incrementValueBy:(long long)arg1 forKey:(id)arg2;
- (id)init;
- (void)recordDistributionTime:(unsigned long long)arg1 forKey:(id)arg2;
- (void)recordDistributionValue:(double)arg1 forKey:(id)arg2;
- (void)resetDistributionForKey:(id)arg1;
- (void)resetDistributionToValue:(double)arg1 forKey:(id)arg2;
- (void)resetValueForKey:(id)arg1;
- (void)setValue:(long long)arg1 forKey:(id)arg2;

@end
