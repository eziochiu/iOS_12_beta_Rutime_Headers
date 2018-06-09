/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyShareTokenInfo : NSObject {
    NSString * _baseToken;
    NSData * _encryptedFullTokenData;
    CKRecordID * _shareID;
    NSData * _shortSharingTokenHashData;
}

@property (nonatomic, retain) NSString *baseToken;
@property (nonatomic, retain) NSData *encryptedFullTokenData;
@property (nonatomic, retain) CKRecordID *shareID;
@property (nonatomic, retain) NSData *shortSharingTokenHashData;

- (void).cxx_destruct;
- (id)baseToken;
- (id)encryptedFullTokenData;
- (void)setBaseToken:(id)arg1;
- (void)setEncryptedFullTokenData:(id)arg1;
- (void)setShareID:(id)arg1;
- (void)setShortSharingTokenHashData:(id)arg1;
- (id)shareID;
- (id)shortSharingTokenHashData;

@end
