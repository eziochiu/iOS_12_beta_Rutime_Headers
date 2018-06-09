/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _REHistogramRange : NSObject <NSCopying, REComparable> {
    REFeatureValue * _max;
    REFeatureValue * _min;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) REFeatureValue *max;
@property (nonatomic, readonly) REFeatureValue *mid;
@property (nonatomic, readonly) REFeatureValue *min;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMin:(id)arg1 max:(id)arg2;
- (id)initWithValue:(id)arg1 binningSize:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)max;
- (id)mid;
- (id)min;

@end
