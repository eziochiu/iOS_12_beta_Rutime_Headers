/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchPhotoList : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *photos;
@property (nonatomic, copy) NSString *providerId;
@property (readonly) Class superclass;

+ (id)photoList;
+ (id)photoListWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)photos;
- (id)providerId;
- (void)setPhotos:(id)arg1;
- (void)setProviderId:(id)arg1;

@end
