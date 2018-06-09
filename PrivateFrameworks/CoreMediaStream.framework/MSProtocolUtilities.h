/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSProtocolUtilities : NSObject

+ (id)Win32SHA1OfUDID:(id)arg1;
+ (id)_urlSession;
+ (id)appleIDSession;
+ (void)applyUserDefaultOverridesToResponse:(id)arg1;
+ (id)deviceInfoDictForPersonID:(id)arg1;
+ (void)fetchMPSStateWithBaseAvailabilityURL:(id)arg1 personID:(id)arg2 completionBlock:(id /* block */)arg3;
+ (id)retryAfterDateBasedOnRetryAfterHeaderString:(id)arg1;

@end
