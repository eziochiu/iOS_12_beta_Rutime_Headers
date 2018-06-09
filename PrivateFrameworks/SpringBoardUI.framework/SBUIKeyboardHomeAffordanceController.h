/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIKeyboardHomeAffordanceController : NSObject <MTLumaDodgePillBackgroundLuminanceObserver> {
    NSHashTable * _assertions;
    MTLumaDodgePillView * _pillView;
    SBUIKeyboardHomeAffordanceAssertion * _topMostAssertion;
}

@property (nonatomic, retain) NSHashTable *assertions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MTLumaDodgePillView *pillView;
@property (readonly) Class superclass;
@property (nonatomic) SBUIKeyboardHomeAffordanceAssertion *topMostAssertion;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)assertions;
- (void)createHomeAffordanceIfNecessary;
- (void)dealloc;
- (id)init;
- (void)lumaDodgePillDidDetectBackgroundLuminanceChange:(id)arg1;
- (id)pillContainingView;
- (id)pillView;
- (void)registerAssertion:(id)arg1;
- (void)setAssertions:(id)arg1;
- (void)setPillView:(id)arg1;
- (void)setTopMostAssertion:(id)arg1;
- (id)topMostAssertion;
- (void)unregisterAssertion:(id)arg1;
- (void)updateFrameForHomeAffordanceWithAdditionalMargin:(double)arg1;
- (void)updateHomeAffordanceMargin;
- (void)updateTopMostAssertion;

@end
