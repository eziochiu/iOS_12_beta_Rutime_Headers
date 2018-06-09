/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSInvitationResponse : NSObject {
    bool  _accept;
    MSShare * _invitation;
}

@property (nonatomic) bool accept;
@property (nonatomic, retain) MSShare *invitation;

+ (id)responseWithInvitation:(id)arg1 accept:(bool)arg2;

- (void).cxx_destruct;
- (bool)accept;
- (id)initWithInvitation:(id)arg1 accept:(bool)arg2;
- (id)invitation;
- (void)setAccept:(bool)arg1;
- (void)setInvitation:(id)arg1;

@end
