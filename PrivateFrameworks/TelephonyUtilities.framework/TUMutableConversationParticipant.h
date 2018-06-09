/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUMutableConversationParticipant : TUConversationParticipant

@property (getter=isAudioEnabled, nonatomic) bool audioEnabled;
@property (nonatomic, copy) TUHandle *handle;
@property (nonatomic) unsigned long long identifier;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic) long long streamToken;
@property (getter=isVideoEnabled, nonatomic) bool videoEnabled;

+ (bool)supportsSecureCoding;

@end
