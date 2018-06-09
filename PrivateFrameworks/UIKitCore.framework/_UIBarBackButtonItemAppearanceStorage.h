/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIBarBackButtonItemAppearanceStorage : NSObject {
    NSMutableDictionary * backgroundImages;
    NSMutableDictionary * backgroundVerticalAdjustmentsForBarMetrics;
    NSMutableDictionary * miniBackgroundImages;
    NSValue * miniTitlePositionOffset;
    NSValue * titlePositionOffset;
}

@property (nonatomic, retain) NSValue *miniTitlePositionOffset;
@property (nonatomic, retain) NSValue *titlePositionOffset;

- (void).cxx_destruct;
- (id)anyBackgroundImage;
- (id)backgroundImageForState:(unsigned long long)arg1 isMini:(bool)arg2;
- (double)backgroundVerticalAdjustmentForBarMetrics:(long long)arg1;
- (id)miniTitlePositionOffset;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(bool)arg3;
- (void)setBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)setMiniTitlePositionOffset:(id)arg1;
- (void)setTitlePositionOffset:(id)arg1;
- (id)titlePositionOffset;

@end
