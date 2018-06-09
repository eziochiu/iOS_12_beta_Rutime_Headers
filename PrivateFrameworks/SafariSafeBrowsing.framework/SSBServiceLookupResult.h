/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
 */

@interface SSBServiceLookupResult : NSObject <NSCopying, NSSecureCoding> {
    struct LookupResult { 
        struct OptionSet<Backend::LookupResult::Type> { 
            unsigned int m_storage; 
        } type; 
        int provider; 
    }  _lookupResult;
}

@property (getter=isKnownToBeUnsafe, nonatomic, readonly) bool knownToBeUnsafe;
@property (getter=isMalware, nonatomic, readonly) bool malware;
@property (getter=isPhishing, nonatomic, readonly) bool phishing;
@property (nonatomic, readonly) NSString *provider;
@property (getter=isUnwantedSoftware, nonatomic, readonly) bool unwantedSoftware;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (id)_initWithLookupResult:(struct LookupResult { struct OptionSet<Backend::LookupResult::Type> { unsigned int x_1_1_1; } x1; int x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isKnownToBeUnsafe;
- (bool)isMalware;
- (bool)isPhishing;
- (bool)isUnwantedSoftware;
- (id)provider;

@end
