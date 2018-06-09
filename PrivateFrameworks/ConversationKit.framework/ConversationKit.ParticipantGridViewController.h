/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface ConversationKit.ParticipantGridViewController : UIViewController {
    void focusedParticipant;
    void forceAudioPriorityButton;
    void participantGridViewControllerDelegate;
    void participantPriorities;
    void participants;
    void participantsBeforeFocus;
    void participantsViewControllerDelegate;
    void sashedParticipant;
    void selectedParticipant;
}

- (id /* block */).cxx_destruct;
- (bool)accessibilityParticipantHasFocus;
- (void)forceBumpPriority;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewDidLoad;

@end
