/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBrowserWindowStateData : NSObject {
    NSString * _UUIDString;
    long long  _activeDocumentIndex;
    long long  _activePrivateDocumentIndex;
    long long  _databaseID;
    bool  _isActiveDocumentValid;
    bool  _isTabStateSuccessfullyLoaded;
    long long  _legacyPlistFileVersion;
    bool  _needsQuickUpdate;
    long long  _type;
}

@property (nonatomic, retain) NSString *UUIDString;
@property (nonatomic) long long activeDocumentIndex;
@property (nonatomic) long long activePrivateDocumentIndex;
@property (nonatomic) long long databaseID;
@property (nonatomic) bool isActiveDocumentValid;
@property (nonatomic, readonly) bool isInDatabase;
@property (nonatomic) bool isTabStateSuccessfullyLoaded;
@property (nonatomic) long long legacyPlistFileVersion;
@property (nonatomic) bool needsQuickUpdate;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)UUIDString;
- (long long)activeDocumentIndex;
- (long long)activePrivateDocumentIndex;
- (long long)databaseID;
- (id)dictionaryPresentation;
- (id)initWithDictionaryPresentation:(id)arg1;
- (id)initWithSQLiteRow:(id)arg1;
- (bool)isActiveDocumentValid;
- (bool)isInDatabase;
- (bool)isTabStateSuccessfullyLoaded;
- (long long)legacyPlistFileVersion;
- (bool)needsQuickUpdate;
- (void)setActiveDocumentIndex:(long long)arg1;
- (void)setActivePrivateDocumentIndex:(long long)arg1;
- (void)setDatabaseID:(long long)arg1;
- (void)setIsActiveDocumentValid:(bool)arg1;
- (void)setIsTabStateSuccessfullyLoaded:(bool)arg1;
- (void)setLegacyPlistFileVersion:(long long)arg1;
- (void)setNeedsQuickUpdate:(bool)arg1;
- (void)setType:(long long)arg1;
- (void)setUUIDString:(id)arg1;
- (long long)type;

@end
