/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSizeMetricFamily : NSObject {
    NSString * _name;
    NSMutableDictionary * _sizeMetrics;
}

@property (readonly) NSString *name;
@property (readonly) NSMutableDictionary *sizeMetrics;

+ (id)sizeMetricFamilyWithName:(id)arg1;

- (void).cxx_destruct;
- (id)allSizeMetrics;
- (id)description;
- (id)initWithName:(id)arg1;
- (id)name;
- (id)sizeMetricWithName:(id)arg1;
- (id)sizeMetricWithName:(id)arg1 string:(id)arg2 scale:(unsigned long long)arg3;
- (id)sizeMetrics;

@end
