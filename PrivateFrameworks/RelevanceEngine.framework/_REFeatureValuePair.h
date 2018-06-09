/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _REFeatureValuePair : NSObject {
    REFeature * _feature;
    unsigned long long  _index;
    REFeatureValue * _value;
}

@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) REFeatureValue *value;

- (void).cxx_destruct;
- (id)feature;
- (unsigned long long)hash;
- (unsigned long long)index;
- (id)initWithFeature:(id)arg1 value:(id)arg2 index:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)value;

@end
