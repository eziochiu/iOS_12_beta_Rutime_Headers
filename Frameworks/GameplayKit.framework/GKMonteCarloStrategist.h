/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKMonteCarloStrategist : NSObject <GKStrategist> {
    struct GKCMonteCarloStrategist { id x1; unsigned long long x2; unsigned long long x3; bool x4; bool x5; } * _monteCarloStrategist;
}

@property (nonatomic) unsigned long long budget;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long explorationParameter;
@property (nonatomic, retain) <GKGameModel> *gameModel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <GKRandom> *randomSource;
@property (readonly) Class superclass;

- (id)bestMoveForActivePlayer;
- (unsigned long long)budget;
- (void)dealloc;
- (unsigned long long)explorationParameter;
- (id)gameModel;
- (id)init;
- (id)randomSource;
- (void)setBudget:(unsigned long long)arg1;
- (void)setExplorationParameter:(unsigned long long)arg1;
- (void)setGameModel:(id)arg1;
- (void)setRandomSource:(id)arg1;
- (bool)validateGameModel:(id)arg1;

@end
