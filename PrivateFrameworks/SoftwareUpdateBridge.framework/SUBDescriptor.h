/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
 */

@interface SUBDescriptor : NSObject <NSSecureCoding> {
    NSDate * _dateOfLastSentInstallNotification;
    NSError * _denialReasons;
    bool  _displayTermsRequested;
    SUBDocumentation * _documentation;
    NSString * _documentationID;
    long long  _downloadSize;
    bool  _installTonightScheduled;
    long long  _installationSize;
    bool  _isAwaitingAdmissionControlForInstallation;
    NSString * _marketingVersion;
    long long  _msuPrepareSize;
    NSString * _productBuildVersion;
    NSString * _productSystemName;
    NSString * _productVersion;
    NSString * _publisher;
    long long  _totalRequiredFreeSpace;
    long long  _unarchivedSize;
    bool  _userDidAcceptTermsAndConditions;
    long long  _userInstallRequestType;
    bool  _willProceedWithInstallation;
}

@property (nonatomic, retain) NSDate *dateOfLastSentInstallNotification;
@property (nonatomic, retain) NSError *denialReasons;
@property (nonatomic) bool displayTermsRequested;
@property (nonatomic, retain) SUBDocumentation *documentation;
@property (nonatomic, retain) NSString *documentationID;
@property (nonatomic) long long downloadSize;
@property (nonatomic, readonly, retain) NSString *humanReadableUpdateName;
@property (nonatomic) bool installTonightScheduled;
@property (nonatomic) long long installationSize;
@property (nonatomic) bool isAwaitingAdmissionControlForInstallation;
@property (nonatomic, retain) NSString *marketingVersion;
@property (nonatomic) long long msuPrepareSize;
@property (nonatomic, readonly) long long preparationSize;
@property (nonatomic, retain) NSString *productBuildVersion;
@property (nonatomic, retain) NSString *productSystemName;
@property (nonatomic, retain) NSString *productVersion;
@property (nonatomic, retain) NSString *publisher;
@property (nonatomic) long long totalRequiredFreeSpace;
@property (nonatomic) long long unarchivedSize;
@property (nonatomic) bool userDidAcceptTermsAndConditions;
@property (nonatomic) long long userInstallRequestType;
@property (nonatomic) bool willProceedWithInstallation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copy;
- (id)dateOfLastSentInstallNotification;
- (id)denialReasons;
- (id)description;
- (bool)displayTermsRequested;
- (id)documentation;
- (id)documentationID;
- (long long)downloadSize;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)humanReadableUpdateName;
- (id)initWithCoder:(id)arg1;
- (bool)installTonightScheduled;
- (long long)installationSize;
- (bool)isAwaitingAdmissionControlForInstallation;
- (bool)isEqual:(id)arg1;
- (id)marketingVersion;
- (long long)msuPrepareSize;
- (long long)preparationSize;
- (id)productBuildVersion;
- (id)productSystemName;
- (id)productVersion;
- (id)publisher;
- (void)setDateOfLastSentInstallNotification:(id)arg1;
- (void)setDenialReasons:(id)arg1;
- (void)setDisplayTermsRequested:(bool)arg1;
- (void)setDocumentation:(id)arg1;
- (void)setDocumentationID:(id)arg1;
- (void)setDownloadSize:(long long)arg1;
- (void)setInstallTonightScheduled:(bool)arg1;
- (void)setInstallationSize:(long long)arg1;
- (void)setIsAwaitingAdmissionControlForInstallation:(bool)arg1;
- (void)setMarketingVersion:(id)arg1;
- (void)setMsuPrepareSize:(long long)arg1;
- (void)setProductBuildVersion:(id)arg1;
- (void)setProductSystemName:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setPublisher:(id)arg1;
- (void)setTotalRequiredFreeSpace:(long long)arg1;
- (void)setUnarchivedSize:(long long)arg1;
- (void)setUserDidAcceptTermsAndConditions:(bool)arg1;
- (void)setUserInstallRequestType:(long long)arg1;
- (void)setWillProceedWithInstallation:(bool)arg1;
- (long long)totalRequiredFreeSpace;
- (long long)unarchivedSize;
- (bool)userDidAcceptTermsAndConditions;
- (long long)userInstallRequestType;
- (bool)willProceedWithInstallation;

@end
