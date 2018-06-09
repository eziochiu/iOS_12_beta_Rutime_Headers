/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

@interface OSAProxyConfiguration : NSObject {
    NSString * _automatedContextURL;
    NSString * _automatedDeviceGroup;
    NSString * _awdReporterKey;
    NSString * _buildVersion;
    NSString * _crashReporterKey;
    NSDictionary * _currentTaskingIDByRouting;
    NSString * _experimentGroup;
    NSString * _identifier;
    NSString * _internalKey;
    NSString * _logPath;
    NSString * _modelCode;
    NSString * _osTrain;
    NSString * _productBuildString;
    NSString * _productName;
    NSString * _productNameVersionBuildString;
    NSString * _productReleaseString;
    NSString * _productVersion;
    NSString * _releaseType;
    NSString * _seedGroup;
    NSString * _serialNumber;
    NSString * _systemId;
    NSString * _targetAudience;
    NSString * _uiCountryCode;
}

@property (readonly) NSString *automatedContextURL;
@property (readonly) NSString *automatedDeviceGroup;
@property (readonly) NSString *awdReporterKey;
@property (readonly) NSString *buildVersion;
@property (readonly) NSString *crashReporterKey;
@property (readonly) NSDictionary *currentTaskingIDByRouting;
@property (readonly) NSString *experimentGroup;
@property (readonly) NSString *identifier;
@property (readonly) NSString *internalKey;
@property (readonly) bool isInternalBridge;
@property (readonly) bool isProxy;
@property (readonly) NSString *logPath;
@property (readonly) NSString *modelCode;
@property (readonly) NSString *osTrain;
@property (readonly) NSString *productNameVersionBuildString;
@property (readonly) NSString *productVersion;
@property (readonly) NSString *releaseType;
@property (readonly) NSString *seedGroup;
@property (readonly) NSString *systemId;
@property (readonly) NSString *targetAudience;
@property (readonly) NSString *uiCountryCode;

- (void).cxx_destruct;
- (id)assembleMetadataAt:(double)arg1 withOptions:(unsigned int)arg2;
- (id)automatedContextURL;
- (id)automatedDeviceGroup;
- (id)awdReporterKey;
- (id)buildVersion;
- (id)crashReporterKey;
- (id)currentTaskingIDByRouting;
- (id)description;
- (id)experimentGroup;
- (id)identifier;
- (id)initFromPath:(id)arg1;
- (id)internalKey;
- (bool)isInternalBridge;
- (bool)isProxy;
- (id)logPath;
- (id)metadata;
- (id)modelCode;
- (id)osTrain;
- (id)productNameVersionBuildString;
- (id)productVersion;
- (id)releaseType;
- (id)seedGroup;
- (id)systemId;
- (id)targetAudience;
- (id)uiCountryCode;

@end
