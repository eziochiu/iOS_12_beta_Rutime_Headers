/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNotificationDropboxData : NSObject <FCNotificationDropboxData> {
    NSDictionary * _dictionary;
}

@property (nonatomic, readonly, copy) NSString *baseURLString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceToken;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *notificationUserID;
@property (nonatomic, readonly, copy) NSString *storefrontID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseURLString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceToken;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)notificationUserID;
- (id)storefrontID;

@end
