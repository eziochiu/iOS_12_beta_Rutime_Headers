/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCSCEPPayload : MCCertificatePayload {
    NSArray * _CACaps;
    NSData * _CAFingerprint;
    NSString * _CAInstanceName;
    NSString * _URLString;
    NSString * _challenge;
    unsigned long long  _keySize;
    unsigned long long  _retries;
    unsigned long long  _retryDelay;
    NSArray * _subject;
    NSDictionary * _subjectAltName;
    int  _usageFlags;
}

@property (nonatomic, readonly, retain) NSArray *CACaps;
@property (nonatomic, readonly, retain) NSData *CAFingerprint;
@property (nonatomic, readonly, retain) NSString *CAInstanceName;
@property (nonatomic, readonly, retain) NSString *URLString;
@property (nonatomic, readonly, retain) NSString *challenge;
@property (nonatomic, readonly) unsigned long long keySize;
@property (nonatomic, readonly) unsigned long long retries;
@property (nonatomic, readonly) unsigned long long retryDelay;
@property (nonatomic, readonly, retain) NSArray *subject;
@property (nonatomic, readonly, retain) NSDictionary *subjectAltName;
@property (nonatomic, readonly) int usageFlags;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)CACaps;
- (id)CAFingerprint;
- (id)CAInstanceName;
- (id)URLString;
- (id)challenge;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)isIdentity;
- (bool)isRoot;
- (unsigned long long)keySize;
- (id)payloadDescriptionKeyValueSections;
- (unsigned long long)retries;
- (unsigned long long)retryDelay;
- (id)stubDictionary;
- (id)subject;
- (id)subjectAltName;
- (int)usageFlags;

@end
