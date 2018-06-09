/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartRepAnimationDictionaryEntry : NSObject {
    TSCHMultiDataLayerAnimationInfo * mAnimationInfo;
    NSMutableArray * mAnimations;
}

+ (id)entry;

- (void)addAnimation:(id)arg1 animationInfo:(id)arg2;
- (id)animation;
- (void)dealloc;
- (id)init;

@end
