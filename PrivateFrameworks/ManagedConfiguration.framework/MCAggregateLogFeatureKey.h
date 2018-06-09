/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCAggregateLogFeatureKey : MCAggregateLogKey {
    NSString * _feature;
    NSString * _nameSuffix;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSString *feature;
@property (nonatomic, retain) NSString *nameSuffix;
@property (nonatomic) unsigned long long type;

+ (id)_feature:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3;
+ (id)falseFeature:(id)arg1;
+ (id)falseFeature:(id)arg1 name:(id)arg2;
+ (id)intersectionFeature:(id)arg1;
+ (id)intersectionFeature:(id)arg1 name:(id)arg2;
+ (id)objectFeature:(id)arg1;
+ (id)objectFeature:(id)arg1 name:(id)arg2;
+ (id)trueFeature:(id)arg1;
+ (id)trueFeature:(id)arg1 name:(id)arg2;
+ (void)update;
+ (id)valueFeature:(id)arg1;
+ (id)valueFeature:(id)arg1 name:(id)arg2;

- (void).cxx_destruct;
- (id)feature;
- (id)nameSuffix;
- (void)setFeature:(id)arg1;
- (void)setNameSuffix:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
