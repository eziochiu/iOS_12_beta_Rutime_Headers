/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreLibraryPersonalizationRequest : MPModelRequest {
    NSMutableDictionary * _itemIndexPathToOverridePropertySet;
    MPSectionedCollection * _representedObjects;
    MPSectionedCollection * _unpersonalizedContentDescriptors;
}

@property (nonatomic, readonly, copy) NSDictionary *itemIndexPathToOverridePropertySet;
@property (nonatomic, retain) MPSectionedCollection *representedObjects;
@property (nonatomic, readonly) MPSectionedCollection *unpersonalizedContentDescriptors;

+ (id)defaultLibraryView;
+ (id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2;
+ (id)sharedQueue;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithUnpersonalizedContentDescriptors:(id)arg1;
- (id)initWithUnpersonalizedRequest:(id)arg1 unpersonalizedContentDescriptors:(id)arg2;
- (id)itemIndexPathToOverridePropertySet;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)propertiesForItemAtIndexPath:(id)arg1;
- (id)representedObjects;
- (void)setProperties:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)setRepresentedObjects:(id)arg1;
- (id)unpersonalizedContentDescriptors;

@end
