/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVContainer : NSObject {
    NSURL * _addMemberURL;
    NSDictionary * _bulkRequests;
    NSString * _containerTitle;
    bool  _isUnauthenticated;
    NSURL * _owner;
    NSSet * _privileges;
    NSString * _pushKey;
    NSDictionary * _pushTransports;
    NSString * _quotaAvailable;
    NSString * _quotaUsed;
    NSURL * _resourceID;
    CoreDAVResourceTypeItem * _resourceType;
    CoreDAVSupportedReportSetItem * _supportedReportSetItem;
    NSString * _syncToken;
    NSURL * _url;
}

@property (nonatomic, retain) NSURL *addMemberURL;
@property (nonatomic, retain) NSDictionary *bulkRequests;
@property (nonatomic, retain) NSString *containerTitle;
@property (nonatomic, readonly) bool hasBindPrivileges;
@property (nonatomic, readonly) bool hasReadPrivileges;
@property (nonatomic, readonly) bool hasUnbindPrivileges;
@property (nonatomic, readonly) bool hasWriteContentPrivileges;
@property (nonatomic, readonly) bool hasWritePropertiesPrivileges;
@property (nonatomic, readonly) bool isPrincipal;
@property (nonatomic) bool isUnauthenticated;
@property (nonatomic, retain) NSURL *owner;
@property (nonatomic, retain) NSSet *privileges;
@property (nonatomic, readonly) NSSet *privilegesAsStringSet;
@property (nonatomic, retain) NSString *pushKey;
@property (nonatomic, retain) NSDictionary *pushTransports;
@property (nonatomic, retain) NSString *quotaAvailable;
@property (nonatomic, retain) NSString *quotaUsed;
@property (nonatomic, retain) NSURL *resourceID;
@property (nonatomic, retain) CoreDAVResourceTypeItem *resourceType;
@property (nonatomic, readonly) NSSet *resourceTypeAsStringSet;
@property (nonatomic, retain) CoreDAVSupportedReportSetItem *supportedReportSetItem;
@property (nonatomic, readonly) NSSet *supportedReports;
@property (nonatomic, readonly) NSSet *supportedReportsAsStringSet;
@property (nonatomic, readonly) bool supportsPrincipalPropertySearchReport;
@property (nonatomic, readonly) bool supportsSyncCollectionReport;
@property (nonatomic, retain) NSString *syncToken;
@property (nonatomic, retain) NSURL *url;

+ (id)convertPushTransportsForNSServerNotificationCenter:(id)arg1;
+ (id)copyPropertyMappingsForParser;

- (void).cxx_destruct;
- (bool)_anyPrivilegesMatches:(id /* block */)arg1;
- (id)addMemberURL;
- (void)applyParsedProperties:(id)arg1;
- (id)bulkRequests;
- (id)containerTitle;
- (id)description;
- (bool)hasBindPrivileges;
- (bool)hasReadPrivileges;
- (bool)hasUnbindPrivileges;
- (bool)hasWriteContentPrivileges;
- (bool)hasWritePropertiesPrivileges;
- (id)initWithURL:(id)arg1 andProperties:(id)arg2;
- (bool)isPrincipal;
- (bool)isUnauthenticated;
- (id)owner;
- (void)postProcessWithResponseHeaders:(id)arg1;
- (id)privileges;
- (id)privilegesAsStringSet;
- (id)pushKey;
- (id)pushTransports;
- (id)quotaAvailable;
- (id)quotaUsed;
- (id)resourceID;
- (id)resourceType;
- (id)resourceTypeAsStringSet;
- (void)setAddMemberURL:(id)arg1;
- (void)setBulkRequests:(id)arg1;
- (void)setContainerTitle:(id)arg1;
- (void)setIsUnauthenticated:(bool)arg1;
- (void)setOwner:(id)arg1;
- (void)setPrivileges:(id)arg1;
- (void)setPushKey:(id)arg1;
- (void)setPushTransports:(id)arg1;
- (void)setQuotaAvailable:(id)arg1;
- (void)setQuotaUsed:(id)arg1;
- (void)setResourceID:(id)arg1;
- (void)setResourceType:(id)arg1;
- (void)setSupportedReportSetItem:(id)arg1;
- (void)setSyncToken:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)supportedReportSetItem;
- (id)supportedReports;
- (id)supportedReportsAsStringSet;
- (bool)supportsPrincipalPropertySearchReport;
- (bool)supportsSyncCollectionReport;
- (id)syncToken;
- (id)url;

@end
