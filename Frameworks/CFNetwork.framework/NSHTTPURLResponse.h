/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSHTTPURLResponse : NSURLResponse {
    NSHTTPURLResponseInternal * _httpInternal;
}

@property (readonly, copy) NSDictionary *allHeaderFields;
@property (readonly) long long statusCode;
@property (readonly) bool tsu_isSuccess;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (bool)isErrorStatusCode:(long long)arg1;
+ (id)localizedStringForStatusCode:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id)_allHTTPHeaderFieldsAsArrays;
- (id)_clientCertificateChain;
- (id)_clientCertificateState;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
- (id)_peerCertificateChain;
- (struct __SecTrust { }*)_peerTrust;
- (void)_setPeerTrust:(struct __SecTrust { }*)arg1;
- (id)allHeaderFields;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 HTTPVersion:(id)arg3 headerFields:(id)arg4;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 headerFields:(id)arg3 requestTime:(double)arg4;
- (long long)statusCode;

// Image: /System/Library/Frameworks/Social.framework/Social

+ (id)sl_twitterErrorMessageFromResponseObject:(id)arg1;
+ (id)sl_twitterResponseObjectErrorCode:(id)arg1;

- (int)sl_twitterResponseType:(id)arg1;
- (int)sl_twitterResponseTypeFromResponseObject:(id)arg1 looseAuthFailureMatching:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation

- (bool)_fides_statusIsHTTPOK;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (double)_maxAge;
- (id)getSAPSignature;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (bool)tsu_isSuccess;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)pk_valueForHTTPHeaderField:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Radio.framework/Radio

- (id)radio_decompressedDataWithBodyData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

- (id)_cacheControlParameters;
- (double)cacheControlMaxAge;
- (bool)hasCacheControl;
- (id)ic_valueForHTTPHeaderField:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

- (id)_dateFromExpires;
- (bool)_getCacheControlMaxAge:(double*)arg1;
- (id)_iTunesStore_valueForHTTPHeader:(id)arg1;
- (id)expirationDate;
- (double)expirationInterval;
- (long long)maxExpectedContentLength;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (bool)tsu_isSuccessStatusCode:(long long)arg1;

- (bool)tsu_isSuccess;

@end
