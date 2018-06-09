/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKPlayerCredential : GKInternalRepresentation {
    NSString * _DSID;
    NSString * _accountName;
    NSString * _altDSID;
    NSString * _authenticationToken;
    long long  _environment;
    GKPlayerInternal * _playerInternal;
    NSString * _rawPassword;
    unsigned int  _scope;
    NSDate * _scopeModificationDate;
}

@property (retain) NSString *DSID;
@property (retain) NSString *accountName;
@property (retain) NSString *altDSID;
@property (retain) NSString *authenticationToken;
@property long long environment;
@property (retain) GKPlayerInternal *playerInternal;
@property (retain) NSString *rawPassword;
@property unsigned int scope;
@property (readonly) NSString *scopeAsString;
@property (retain) NSDate *scopeModificationDate;

+ (id)secureCodedPropertyKeys;

- (id)DSID;
- (id)accountName;
- (id)altDSID;
- (id)authenticationToken;
- (void)dealloc;
- (id)description;
- (long long)environment;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)playerInternal;
- (id)rawPassword;
- (unsigned int)scope;
- (id)scopeAsString;
- (id)scopeModificationDate;
- (void)setAccountName:(id)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setAuthenticationToken:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setEnvironment:(long long)arg1;
- (void)setPlayerInternal:(id)arg1;
- (void)setRawPassword:(id)arg1;
- (void)setScope:(unsigned int)arg1;
- (void)setScopeModificationDate:(id)arg1;

@end
