/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSButton : UIButton <CPSControl> {
    <CPSButtonDelegate> * _delegate;
    NSUUID * _identifier;
    UITapGestureRecognizer * _pressTapRecognizer;
    UITapGestureRecognizer * _touchTapRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPSButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) UITapGestureRecognizer *pressTapRecognizer;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *touchTapRecognizer;

+ (id)buttonWithType:(long long)arg1;

- (void).cxx_destruct;
- (void)_addGestureRecognizers;
- (void)_buttonPressed:(id)arg1;
- (void)_buttonSelected:(id)arg1 interactionModel:(unsigned long long)arg2;
- (void)_buttonTapped:(id)arg1;
- (id)delegate;
- (void)didMoveToWindow;
- (id)identifier;
- (id)pressTapRecognizer;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPressTapRecognizer:(id)arg1;
- (void)setTouchTapRecognizer:(id)arg1;
- (id)touchTapRecognizer;
- (void)traitCollectionDidChange:(id)arg1;

@end
