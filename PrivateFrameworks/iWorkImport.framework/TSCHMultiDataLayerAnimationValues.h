/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataLayerAnimationValues : NSObject {
    NSString * mKey;
    NSArray * mKeyTimes;
    CALayer * mLayer;
    bool  mNeedPresentationLayerValues;
    NSArray * mValues;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSArray *keyTimes;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) bool needPresentationLayerValues;
@property (nonatomic, readonly) NSArray *values;

+ (id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3;
+ (id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4;
+ (id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(bool)arg5;

- (void)dealloc;
- (id)description;
- (id)initWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(bool)arg5;
- (id)key;
- (id)keyTimes;
- (id)layer;
- (bool)needPresentationLayerValues;
- (id)values;

@end
