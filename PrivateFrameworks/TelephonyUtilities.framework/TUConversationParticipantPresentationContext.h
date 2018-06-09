/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUConversationParticipantPresentationContext : NSObject <NSSecureCoding> {
    unsigned long long  _participantIdentifier;
    unsigned long long  _videoQuality;
    NSNumber * _visibility;
}

@property (nonatomic, readonly) unsigned long long participantIdentifier;
@property (nonatomic, readonly) unsigned long long videoQuality;
@property (nonatomic, readonly) NSNumber *visibility;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParticipant:(id)arg1 videoQuality:(unsigned long long)arg2 visibility:(id)arg3;
- (id)initWithParticipantIdentifier:(unsigned long long)arg1 videoQuality:(unsigned long long)arg2 visibility:(id)arg3;
- (unsigned long long)participantIdentifier;
- (unsigned long long)videoQuality;
- (id)visibility;

@end
