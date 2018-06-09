/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudTabCloseRequest : NSObject <NSCopying> {
    NSUUID * _destinationDeviceUUID;
    NSDate * _lastModified;
    NSUUID * _requestUUID;
    NSUUID * _sourceDeviceUUID;
    NSUUID * _tabUUID;
    NSURL * _url;
}

@property (nonatomic, readonly) NSUUID *destinationDeviceUUID;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSDate *lastModified;
@property (nonatomic, readonly) NSUUID *requestUUID;
@property (nonatomic, readonly) NSUUID *tabUUID;
@property (nonatomic, readonly) NSURL *url;

+ (id)_dictionaryWithURL:(id)arg1 tabUUID:(id)arg2 lastModified:(id)arg3 sourceDeviceUUID:(id)arg4 destinationDeviceUUID:(id)arg5;
+ (id)destinationDeviceUUIDInDictionary:(id)arg1;
+ (bool)isCloudTabCloseRequestDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationDeviceUUID;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1 requestUUID:(id)arg2;
- (id)initWithURL:(id)arg1 tabUUID:(id)arg2 lastModified:(id)arg3 sourceDeviceUUID:(id)arg4 destinationDeviceUUID:(id)arg5 requestUUID:(id)arg6;
- (id)lastModified;
- (bool)matchesCloudTab:(id)arg1;
- (id)requestUUID;
- (id)tabUUID;
- (id)url;

@end
