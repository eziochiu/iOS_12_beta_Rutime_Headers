/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFValueTransformer : NSObject {
    id /* block */  _reverseTransformBlock;
    id /* block */  _transformBlock;
    Class  _valueClass;
}

@property (nonatomic, copy) id /* block */ reverseTransformBlock;
@property (nonatomic, copy) id /* block */ transformBlock;
@property (nonatomic, retain) Class valueClass;

+ (id)identityTransformer;
+ (id)transformerForValueClass:(Class)arg1 transformBlock:(id /* block */)arg2 reverseTransformBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)reverseTransformBlock;
- (void)setReverseTransformBlock:(id /* block */)arg1;
- (void)setTransformBlock:(id /* block */)arg1;
- (void)setValueClass:(Class)arg1;
- (id /* block */)transformBlock;
- (id)transformedValueForValue:(id)arg1;
- (Class)valueClass;
- (id)valueForTransformedValue:(id)arg1;

@end
