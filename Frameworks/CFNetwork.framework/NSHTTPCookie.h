/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSHTTPCookie : NSObject {
    NSHTTPCookieInternal * _cookiePrivate;
}

@property (getter=isHTTPOnly, readonly) bool HTTPOnly;
@property (getter=ams_isCookieValidForBag, nonatomic, readonly) bool ams_cookieValidForBag;
@property (readonly, copy) NSString *comment;
@property (readonly, copy) NSURL *commentURL;
@property (readonly, copy) NSString *domain;
@property (readonly, copy) NSDate *expiresDate;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *path;
@property (readonly, copy) NSArray *portList;
@property (readonly, copy) NSDictionary *properties;
@property (getter=isSecure, readonly) bool secure;
@property (getter=isSessionOnly, readonly) bool sessionOnly;
@property (readonly, copy) NSString *value;
@property (readonly) unsigned long long version;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (id)_cf2nsCookies:(struct __CFArray { }*)arg1;
+ (id)_cookieForSetCookieString:(id)arg1 forURL:(id)arg2 partition:(id)arg3;
+ (id)_cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2 singleCookie:(bool)arg3;
+ (const struct __CFArray { }*)_ns2cfCookies:(id)arg1;
+ (id)_parsedCookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2;
+ (id)cookieWithCFHTTPCookie:(struct OpaqueCFHTTPCookie { }*)arg1;
+ (id)cookieWithProperties:(id)arg1;
+ (id)cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2;
+ (id)requestHeaderFieldsWithCookies:(id)arg1;

- (id)Comment;
- (id)CommentURL;
- (id)Discard;
- (id)Domain;
- (id)Expires;
- (id)MaxAge;
- (id)Name;
- (id)OriginURL;
- (id)Path;
- (id)Port;
- (id)SameSite;
- (id)Secure;
- (id)StoragePartition;
- (id)Value;
- (id)Version;
- (const struct OpaqueCFHTTPCookie { }*)_CFHTTPCookie;
- (const struct OpaqueCFHTTPCookie { }*)_GetInternalCFHTTPCookie;
- (long long)_compareForHeaderOrder:(id)arg1;
- (bool)_isExpired;
- (id)_key;
- (id)_storagePartition;
- (id)comment;
- (id)commentURL;
- (void)dealloc;
- (id)description;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)expiresDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCFHTTPCookie:(struct OpaqueCFHTTPCookie { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHTTPOnly;
- (bool)isSecure;
- (bool)isSessionOnly;
- (id)name;
- (id)path;
- (id)portList;
- (id)properties;
- (id)sameSitePolicy;
- (id)value;
- (unsigned long long)version;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (id)replacementObjectForPortCoder:(id)arg1;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (bool)sf_matchesTopLevelDomain:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (bool)ams_isCookieValidForBag;

@end
