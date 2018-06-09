/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSPanViewController : UIViewController <CPSPanViewDelegate, UIGestureRecognizerDelegate> {
    NSArray * _nudgeGestureRecognizers;
    <CPSPanEventDelegate> * _panDelegate;
    CPSPanView * _panView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *nudgeGestureRecognizers;
@property (nonatomic) <CPSPanEventDelegate> *panDelegate;
@property (nonatomic, retain) CPSPanView *panView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleNudgeLongPress:(id)arg1;
- (void)_handleNudgeTapped:(id)arg1;
- (id)_linearFocusMovementSequences;
- (id)nudgeGestureRecognizers;
- (id)panDelegate;
- (id)panView;
- (void)panView:(id)arg1 panBeganWithDirection:(unsigned long long)arg2;
- (void)panView:(id)arg1 panEndedWithDirection:(unsigned long long)arg2;
- (void)panView:(id)arg1 panWithDirection:(unsigned long long)arg2;
- (void)setNudgeGestureRecognizers:(id)arg1;
- (void)setPanDelegate:(id)arg1;
- (void)setPanView:(id)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
