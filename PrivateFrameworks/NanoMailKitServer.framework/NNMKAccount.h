/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKAccount : NSObject <NSSecureCoding> {
    NSString * _accountId;
    NSString * _defaultEmailAddress;
    NSString * _displayName;
    NSArray * _emailAddresses;
    NSString * _localId;
    NSArray * _mailboxes;
    NSString * _parentAccountIdentifier;
    bool  _shouldArchive;
    unsigned long long  _sourceType;
    unsigned long long  _standaloneState;
    NSString * _subsectionId;
    NSString * _username;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, copy) NSString *defaultEmailAddress;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSArray *emailAddresses;
@property (nonatomic, retain) NSString *localId;
@property (nonatomic, retain) NSArray *mailboxes;
@property (nonatomic, retain) NSString *parentAccountIdentifier;
@property (nonatomic) bool shouldArchive;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) unsigned long long standaloneState;
@property (nonatomic, retain) NSString *subsectionId;
@property (nonatomic, retain) NSString *username;

+ (id)generateAccountIdForAccount:(id)arg1;
+ (id)generateIdentifierFromEmailsAddresses:(id)arg1;
+ (id)inboxesFromAccounts:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountId;
- (id)defaultEmailAddress;
- (id)description;
- (id)displayName;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isiCloud;
- (id)localId;
- (id)mailboxes;
- (bool)maySupportStandaloneMode;
- (id)parentAccountIdentifier;
- (void)setAccountId:(id)arg1;
- (void)setDefaultEmailAddress:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setLocalId:(id)arg1;
- (void)setMailboxes:(id)arg1;
- (void)setParentAccountIdentifier:(id)arg1;
- (void)setShouldArchive:(bool)arg1;
- (void)setSourceType:(unsigned long long)arg1;
- (void)setStandaloneState:(unsigned long long)arg1;
- (void)setSubsectionId:(id)arg1;
- (void)setUsername:(id)arg1;
- (bool)shouldArchive;
- (unsigned long long)sourceType;
- (unsigned long long)standaloneState;
- (id)subsectionId;
- (id)username;

@end
