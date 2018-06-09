/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDigestMD5Authenticator : MFSASLAuthenticator {
    void * _cryptInfo;
    NSData * _expectedResponse;
    unsigned int  _maxbuf;
    unsigned int  _securityLevel;
}

- (void)dealloc;
- (id)responseForServerData:(id)arg1;
- (int)securityLevel;
- (void)setAuthenticationState:(int)arg1;
- (void)setCryptInfo:(void*)arg1;
- (void)setExpectedResponse:(id)arg1;
- (void)setMaxBuffer:(unsigned int)arg1;
- (void)setSecurityLevel:(int)arg1;

@end
