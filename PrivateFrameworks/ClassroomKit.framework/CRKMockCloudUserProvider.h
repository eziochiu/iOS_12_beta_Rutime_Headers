/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKMockCloudUserProvider : NSObject <CRKCloudUserProvider> {
    CRKCloudUser * _cloudUser;
}

@property (nonatomic, retain) CRKCloudUser *cloudUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)providerWithUser:(id)arg1;

- (void).cxx_destruct;
- (id)cloudUser;
- (void)setCloudUser:(id)arg1;

@end
