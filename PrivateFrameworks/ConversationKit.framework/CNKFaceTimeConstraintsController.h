/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface CNKFaceTimeConstraintsController : NSObject {
    void inCallControlsState;
    void localParticipantState;
    void participantListHeightConstraint;
    void participantListState;
    void stateConstraints;
    void viewStateEffects;
}

@property (nonatomic) long long inCallControlsState;
@property (nonatomic) long long localParticipantState;

- (id /* block */).cxx_destruct;
- (long long)inCallControlsState;
- (id)init;
- (id)initWithContainingView:(id)arg1 controlsView:(id)arg2 inCallControlsState:(long long)arg3;
- (long long)localParticipantState;
- (void)setInCallControlsState:(long long)arg1;
- (void)setLocalParticipantState:(long long)arg1;

@end
