/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoComponent : SXComponent <SXComponentAdvertisingMetadataProviding>

@property (nonatomic, readonly) NSString *accessibilityCaption;
@property (nonatomic, readonly) SXJSONDictionary *advertising;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) NSString *caption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enablePreroll;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *resourceIdentifier;
@property (nonatomic, readonly) NSString *stillImageIdentifier;
@property (readonly) Class superclass;

+ (id)typeString;

- (double)aspectRatioWithValue:(id)arg1 withType:(int)arg2;
- (bool)enablePrerollWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)traits;

@end
