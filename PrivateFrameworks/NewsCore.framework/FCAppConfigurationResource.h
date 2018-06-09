/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAppConfigurationResource : NSObject <FCKeyValueStoreCoding, NSCopying> {
    NSString * _etag;
    NSData * _gzippedConfigurationData;
    NSDate * _lastFetchedDate;
    NSDate * _lastModifiedDate;
    NSString * _lastModifiedString;
    NSNumber * _maxAge;
    NSString * _resourceID;
    NSURL * _sourceURL;
}

@property (nonatomic, readonly) NSData *configurationData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) NSData *gzippedConfigurationData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastFetchedDate;
@property (nonatomic, retain) NSDate *lastModifiedDate;
@property (nonatomic, retain) NSString *lastModifiedString;
@property (nonatomic, retain) NSNumber *maxAge;
@property (nonatomic, retain) NSString *resourceID;
@property (nonatomic, retain) NSURL *sourceURL;
@property (readonly) Class superclass;

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (void).cxx_destruct;
- (id)configurationData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)etag;
- (id)gzippedConfigurationData;
- (bool)isExpiredWithFallbackMaxAge:(double)arg1;
- (id)lastFetchedDate;
- (id)lastModifiedDate;
- (id)lastModifiedString;
- (id)maxAge;
- (id)resourceID;
- (void)setEtag:(id)arg1;
- (void)setGzippedConfigurationData:(id)arg1;
- (void)setLastFetchedDate:(id)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setLastModifiedString:(id)arg1;
- (void)setMaxAge:(id)arg1;
- (void)setResourceID:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (id)sourceURL;
- (void)writeToKeyValuePair:(id)arg1;

@end
