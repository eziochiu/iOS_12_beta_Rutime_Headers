/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCollectionNode : SKNode {
    id /* block */  _animateBlock;
    SKAction * _appearAction;
    CLKDevice * _device;
    SKAction * _disappearAction;
    NSArray * _nodes;
    double  _radius;
}

@property (nonatomic, copy) id /* block */ animateBlock;
@property (nonatomic, retain) SKAction *appearAction;
@property (nonatomic, retain) CLKDevice *device;
@property (nonatomic, retain) SKAction *disappearAction;
@property (nonatomic, retain) NSArray *nodes;
@property (nonatomic) double radius;

+ (id)hours12ForDevice:(id)arg1;
+ (id)hours4ForDevice:(id)arg1;
+ (id)hoursChronoForDevice:(id)arg1;
+ (float)innerRadiusForDevice:(id)arg1;
+ (id)labels30ChronoForDevice:(id)arg1;
+ (id)labels3ChronoForDevice:(id)arg1;
+ (id)labels3_10_90ChronoForDevice:(id)arg1;
+ (id)labels60ChronoForDevice:(id)arg1;
+ (id)labels6ChronoForDevice:(id)arg1;
+ (id)labels6_10_40ChronoForDevice:(id)arg1;
+ (id)minutesPillsForDevice:(id)arg1;
+ (id)minutesUtilitarianForDevice:(id)arg1;
+ (float)outerRadiusForDevice:(id)arg1;
+ (id)ticks120ForDevice:(id)arg1;
+ (id)ticks240ForDevice:(id)arg1;
+ (id)ticks30ChronoForDevice:(id)arg1;
+ (id)ticks60ChronoForDevice:(id)arg1;
+ (id)ticks60ForDevice:(id)arg1;
+ (id)ticks60UtilitarianForDevice:(id)arg1;
+ (id)ticks6ChronoForDevice:(id)arg1;
+ (id)ticksColorAnalogForDevice:(id)arg1;
+ (id)ticksPillsForDevice:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)animateBlock;
- (id)appearAction;
- (void)appearAnimated;
- (void)applyAppearanceFraction:(double)arg1;
- (void)applyAppearanceFraction:(double)arg1 inverted:(bool)arg2;
- (void)createSubNodes;
- (id)device;
- (id)disappearAction;
- (void)disappearAnimated;
- (void)fade:(double)arg1 inverted:(bool)arg2;
- (void)fadeAndScale:(double)arg1;
- (void)fadeNodes:(double)arg1;
- (void)fadeNodes:(double)arg1 except:(id)arg2;
- (id)initForDevice:(id)arg1;
- (id)initForDevice:(id)arg1 withName:(id)arg2 nodes:(id)arg3 animateBlock:(id /* block */)arg4;
- (id)nodes;
- (double)radius;
- (void)scaleNodes:(double)arg1;
- (void)scaleNodes:(double)arg1 andResetNodesAtIndices:(id)arg2;
- (void)scaleNodes:(id)arg1 fraction:(double)arg2;
- (void)setAnimateBlock:(id /* block */)arg1;
- (void)setAppearAction:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setDisappearAction:(id)arg1;
- (void)setNodes:(id)arg1;
- (void)setRadius:(double)arg1;
- (void)updateNodesWithOffset:(unsigned long long)arg1 angleMultiplier:(double)arg2 rotate:(bool)arg3 round:(bool)arg4;
- (void)updateNodesWithOffset:(unsigned long long)arg1 angleMultiplier:(double)arg2 scale:(double)arg3 rotate:(bool)arg4 round:(bool)arg5;

@end
