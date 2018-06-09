/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHResourceAvailabilityRequest : PHAvailabilityRequest {
    <PLResourceIdentity> * _resourceIdentity;
}

@property (nonatomic, readonly) <PLResourceIdentity> *resourceIdentity;

+ (id)_convertResourceIdentityToPlistDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)initWithAssetObjectID:(id)arg1 resourceIdentity:(id)arg2;
- (id)initWithPlistDictionary:(id)arg1;
- (id)plistDictionary;
- (id)resourceIdentity;

@end
