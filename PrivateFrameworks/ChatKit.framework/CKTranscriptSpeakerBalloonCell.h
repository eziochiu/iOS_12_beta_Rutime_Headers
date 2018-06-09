/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptSpeakerBalloonCell : CKTranscriptBalloonCell {
    bool  _adjustSpeakerForAcknowledgment;
    bool  _shouldShowText;
    CKSpeakerButton * _speakerButton;
    bool  _speakerEnabled;
}

@property (nonatomic) bool adjustSpeakerForAcknowledgment;
@property (nonatomic) bool shouldShowText;
@property (nonatomic, retain) CKSpeakerButton *speakerButton;
@property (getter=isSpeakerEnabled, nonatomic) bool speakerEnabled;
@property (getter=isSpeakerHidden, nonatomic) bool speakerHidden;

- (void).cxx_destruct;
- (bool)adjustSpeakerForAcknowledgment;
- (bool)isSpeakerEnabled;
- (bool)isSpeakerHidden;
- (void)layoutSubviewsForAlignmentContents;
- (void)setAdjustSpeakerForAcknowledgment:(bool)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setShouldShowText:(bool)arg1;
- (void)setSpeakerButton:(id)arg1;
- (void)setSpeakerEnabled:(bool)arg1;
- (void)setSpeakerHidden:(bool)arg1;
- (bool)shouldShowText;
- (id)speakerButton;

@end
