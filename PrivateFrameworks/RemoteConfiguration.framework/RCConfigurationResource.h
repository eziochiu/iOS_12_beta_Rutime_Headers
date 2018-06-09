/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

@interface RCConfigurationResource : NSObject <NSCopying, NSSecureCoding> {
    NSString * _configurationID;
    NSString * _contentHash;
    NSData * _gzippedConfigurationData;
    NSDate * _lastFetchedDate;
    NSString * _lastModifiedString;
    NSString * _requestKey;
    NSArray * _segmentSetIDs;
    NSArray * _treatmentIDs;
    RCUserSegmentationConfiguration * _userSegmentationConfiguration;
}

@property (nonatomic, readonly) NSData *configurationData;
@property (nonatomic, retain) NSString *configurationID;
@property (nonatomic, retain) NSString *contentHash;
@property (nonatomic, retain) NSData *gzippedConfigurationData;
@property (nonatomic, retain) NSDate *lastFetchedDate;
@property (nonatomic, retain) NSString *lastModifiedString;
@property (nonatomic, retain) NSString *requestKey;
@property (nonatomic, retain) NSArray *segmentSetIDs;
@property (nonatomic, retain) NSArray *treatmentIDs;
@property (nonatomic, retain) RCUserSegmentationConfiguration *userSegmentationConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configurationData;
- (id)configurationID;
- (id)contentHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)gzippedConfigurationData;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExpiredWithMaxAge:(double)arg1;
- (id)lastFetchedDate;
- (id)lastModifiedString;
- (id)requestKey;
- (id)segmentSetIDs;
- (void)setConfigurationID:(id)arg1;
- (void)setContentHash:(id)arg1;
- (void)setGzippedConfigurationData:(id)arg1;
- (void)setLastFetchedDate:(id)arg1;
- (void)setLastModifiedString:(id)arg1;
- (void)setRequestKey:(id)arg1;
- (void)setSegmentSetIDs:(id)arg1;
- (void)setTreatmentIDs:(id)arg1;
- (void)setUserSegmentationConfiguration:(id)arg1;
- (id)treatmentIDs;
- (id)userSegmentationConfiguration;

@end
