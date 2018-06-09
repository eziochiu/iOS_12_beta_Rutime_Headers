/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKToken : NSObject {
    <TKTokenDelegate> * _delegate;
    TKTokenKeychainContents * _keychainContents;
    TKTokenDriver * _tokenDriver;
    NSString * _tokenID;
}

@property <TKTokenDelegate> *delegate;
@property (retain) TKTokenKeychainContents *keychainContents;
@property (readonly) TKTokenDriver *tokenDriver;
@property (readonly) NSString *tokenID;
@property (readonly) bool valid;

+ (id)encodedObjectID:(id)arg1;

- (void).cxx_destruct;
- (id)decodedObjectID:(id)arg1 error:(id*)arg2;
- (id)delegate;
- (id)description;
- (id)initWithTokenDriver:(id)arg1 instanceID:(id)arg2;
- (id)keychainContents;
- (void)setDelegate:(id)arg1;
- (void)setKeychainContents:(id)arg1;
- (void)terminate;
- (id)tokenDriver;
- (id)tokenID;
- (bool)valid;

@end
