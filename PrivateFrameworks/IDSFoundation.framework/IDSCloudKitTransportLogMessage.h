/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSCloudKitTransportLogMessage : NSObject {
    NSString * _deviceID;
    NSString * _encryptionType;
    NSDictionary * _payload;
    NSString * _secondaryID;
}

@property (nonatomic, readonly) NSString *cypherIdentifier;
@property (nonatomic, readonly) IDSDestinationPushToken *destination;
@property (nonatomic, retain) NSString *deviceID;
@property (nonatomic, readonly) NSData *encryptedPayload;
@property (nonatomic, retain) NSString *encryptionType;
@property (nonatomic, readonly) ENGroupID *groupID;
@property (nonatomic, retain) NSDictionary *payload;
@property (nonatomic, readonly) NSString *recipientAlias;
@property (nonatomic, retain) NSString *secondaryID;
@property (nonatomic, readonly) NSString *senderAlias;

- (void).cxx_destruct;
- (id)cypherIdentifier;
- (id)destination;
- (id)deviceID;
- (id)encryptedPayload;
- (id)encryptionType;
- (id)groupID;
- (id)payload;
- (id)recipientAlias;
- (id)secondaryID;
- (id)senderAlias;
- (void)setDeviceID:(id)arg1;
- (void)setEncryptionType:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setSecondaryID:(id)arg1;

@end
