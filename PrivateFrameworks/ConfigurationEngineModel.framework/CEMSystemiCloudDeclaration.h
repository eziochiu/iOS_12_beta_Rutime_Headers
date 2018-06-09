/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSystemiCloudDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowCloudAddressBook;
    NSNumber * _payloadAllowCloudBackup;
    NSNumber * _payloadAllowCloudBookmarks;
    NSNumber * _payloadAllowCloudCalendar;
    NSNumber * _payloadAllowCloudDesktopAndDocuments;
    NSNumber * _payloadAllowCloudDocumentSync;
    NSNumber * _payloadAllowCloudKeychainSync;
    NSNumber * _payloadAllowCloudMail;
    NSNumber * _payloadAllowCloudNotes;
    NSNumber * _payloadAllowCloudPhotoLibrary;
    NSNumber * _payloadAllowCloudReminders;
    NSNumber * _payloadAllowPhotoStream;
    NSNumber * _payloadAllowSharedStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowCloudAddressBook;
@property (nonatomic, copy) NSNumber *payloadAllowCloudBackup;
@property (nonatomic, copy) NSNumber *payloadAllowCloudBookmarks;
@property (nonatomic, copy) NSNumber *payloadAllowCloudCalendar;
@property (nonatomic, copy) NSNumber *payloadAllowCloudDesktopAndDocuments;
@property (nonatomic, copy) NSNumber *payloadAllowCloudDocumentSync;
@property (nonatomic, copy) NSNumber *payloadAllowCloudKeychainSync;
@property (nonatomic, copy) NSNumber *payloadAllowCloudMail;
@property (nonatomic, copy) NSNumber *payloadAllowCloudNotes;
@property (nonatomic, copy) NSNumber *payloadAllowCloudPhotoLibrary;
@property (nonatomic, copy) NSNumber *payloadAllowCloudReminders;
@property (nonatomic, copy) NSNumber *payloadAllowPhotoStream;
@property (nonatomic, copy) NSNumber *payloadAllowSharedStream;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withAllowCloudBackup:(id)arg2 withAllowCloudDocumentSync:(id)arg3 withAllowPhotoStream:(id)arg4 withAllowSharedStream:(id)arg5 withAllowCloudPhotoLibrary:(id)arg6 withAllowCloudBookmarks:(id)arg7 withAllowCloudMail:(id)arg8 withAllowCloudCalendar:(id)arg9 withAllowCloudReminders:(id)arg10 withAllowCloudAddressBook:(id)arg11 withAllowCloudNotes:(id)arg12 withAllowCloudDesktopAndDocuments:(id)arg13 withAllowCloudKeychainSync:(id)arg14;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadAllowCloudAddressBook;
- (id)payloadAllowCloudBackup;
- (id)payloadAllowCloudBookmarks;
- (id)payloadAllowCloudCalendar;
- (id)payloadAllowCloudDesktopAndDocuments;
- (id)payloadAllowCloudDocumentSync;
- (id)payloadAllowCloudKeychainSync;
- (id)payloadAllowCloudMail;
- (id)payloadAllowCloudNotes;
- (id)payloadAllowCloudPhotoLibrary;
- (id)payloadAllowCloudReminders;
- (id)payloadAllowPhotoStream;
- (id)payloadAllowSharedStream;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowCloudAddressBook:(id)arg1;
- (void)setPayloadAllowCloudBackup:(id)arg1;
- (void)setPayloadAllowCloudBookmarks:(id)arg1;
- (void)setPayloadAllowCloudCalendar:(id)arg1;
- (void)setPayloadAllowCloudDesktopAndDocuments:(id)arg1;
- (void)setPayloadAllowCloudDocumentSync:(id)arg1;
- (void)setPayloadAllowCloudKeychainSync:(id)arg1;
- (void)setPayloadAllowCloudMail:(id)arg1;
- (void)setPayloadAllowCloudNotes:(id)arg1;
- (void)setPayloadAllowCloudPhotoLibrary:(id)arg1;
- (void)setPayloadAllowCloudReminders:(id)arg1;
- (void)setPayloadAllowPhotoStream:(id)arg1;
- (void)setPayloadAllowSharedStream:(id)arg1;

@end
