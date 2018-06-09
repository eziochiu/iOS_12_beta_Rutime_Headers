/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCAggregateLogKey : NSObject

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long value;

+ (unsigned long long)bucket;
+ (id)bucketSpecificKeys:(unsigned long long)arg1;
+ (id)debugKeys;
+ (id)keys;
+ (id)keysForAllBuckets;

- (id)name;
- (unsigned long long)value;

@end
