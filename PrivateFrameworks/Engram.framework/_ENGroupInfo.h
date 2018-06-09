/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

@interface _ENGroupInfo : NSObject <NSSecureCoding> {
    ENAccountIdentity * _accountIdentity;
    NSArray * _participants;
    NSData * _sharedApplicationData;
}

@property (retain) ENAccountIdentity *accountIdentity;
@property (nonatomic, retain) NSArray *participants;
@property (nonatomic, retain) NSData *sharedApplicationData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccountIdentity:(id)arg1 paricipants:(id)arg2 sharedApplicationData:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)participants;
- (void)setAccountIdentity:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setSharedApplicationData:(id)arg1;
- (id)sharedApplicationData;

@end
