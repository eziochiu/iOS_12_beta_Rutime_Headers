/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICMedia : ICCloudSyncingObject <ICCloudObject>

@property (nonatomic, retain) NSData *assetCryptoInitializationVector;
@property (nonatomic, retain) NSData *assetCryptoTag;
@property (nonatomic, retain) ICAttachment *attachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *filename;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allMediaInContext:(id)arg1;
+ (id)containerDirectoryURLForMediaWithIdentifier:(id)arg1;
+ (void)deleteMedia:(id)arg1;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
+ (id)exportableContainerDirectoryURLForMediaWithIdentifier:(id)arg1;
+ (id)exportableMediaDirectoryURL;
+ (id)exportableMediaURLForMediaWithIdentifier:(id)arg1 filename:(id)arg2;
+ (id)keyPathsForValuesAffectingParentCloudObject;
+ (id)mediaDirectoryURL;
+ (id)mediaIdentifiersForAccount:(id)arg1;
+ (id)mediaURLForMediaWithIdentifier:(id)arg1 filename:(id)arg2;
+ (id)mediaWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
+ (id)newMediaWithAttachment:(id)arg1 context:(id)arg2;
+ (id)newMediaWithAttachment:(id)arg1 forData:(id)arg2 filename:(id)arg3 context:(id)arg4 error:(id*)arg5;
+ (id)newMediaWithAttachment:(id)arg1 forFileWrapper:(id)arg2 context:(id)arg3 error:(id*)arg4;
+ (id)newMediaWithAttachment:(id)arg1 forURL:(id)arg2 context:(id)arg3 error:(id*)arg4;
+ (id)newMediaWithIdentifier:(id)arg1 context:(id)arg2;
+ (void)purgeAllMediaFiles;
+ (void)purgeAllMediaInContext:(id)arg1;
+ (void)purgeMedia:(id)arg1;
+ (void)purgeMediaFilesForIdentifiers:(id)arg1;
+ (void)undeleteMedia:(id)arg1;

- (id)containerDirectoryURL;
- (id)data;
- (id)dataWithoutImageMarkupMetadata:(bool)arg1;
- (id)decryptedData;
- (void)deleteExportableMedia;
- (void)deleteFromLocalDatabase;
- (id)encryptedMediaURL;
- (id)exportableContainerDirectoryURL;
- (id)exportableMediaURL;
- (id)exportableMediaURLWithUpdatedFileIfNecessary;
- (id)filename;
- (void)fixBrokenReferences;
- (bool)hasAllMandatoryFields;
- (bool)hasFile;
- (id)ic_loggingValues;
- (bool)isArchivedDirectory;
- (bool)isInICloudAccount;
- (bool)isValid;
- (bool)makeSureExportableMediaDirectoryExists:(id*)arg1;
- (bool)makeSureMediaDirectoryExists:(id*)arg1;
- (id)mediaArchiveURL;
- (id)mediaTarArchiveURL;
- (id)mediaURL;
- (void)mergeDataFromRecord:(id)arg1;
- (bool)needsToBePushedToCloud;
- (id)newlyCreatedRecord;
- (id)objectsToBeDeletedBeforeThisObject;
- (id)parentCloudObject;
- (id)parentEncryptableObject;
- (void)prepareForDeletion;
- (id)recordType;
- (id)recordZoneName;
- (void)resetUniqueIdentifier;
- (void)saveAndClearDecryptedData;
- (void)setAttachment:(id)arg1;
- (void)setFilename:(id)arg1;
- (bool)shouldFallBackToCheckAllCryptoKeys;
- (bool)supportsDeletionByTTL;
- (void)updateFlagToExcludeFromBackup;
- (void)updateFlagToExcludeFromBackupTouchFileIfNecessary:(bool)arg1;
- (bool)writeData:(id)arg1 error:(id*)arg2;
- (bool)writeDataFromAsset:(id)arg1 isArchivedDirectory:(bool)arg2 error:(id*)arg3;
- (bool)writeDataFromFileURL:(id)arg1 error:(id*)arg2;
- (bool)writeDataFromFileWrapper:(id)arg1 error:(id*)arg2;
- (void)writeDataFromItemProvider:(id)arg1 checkForMarkupData:(bool)arg2 completionBlock:(id /* block */)arg3;
- (bool)writeDataWithBlock:(id /* block */)arg1 error:(id*)arg2;

@end
