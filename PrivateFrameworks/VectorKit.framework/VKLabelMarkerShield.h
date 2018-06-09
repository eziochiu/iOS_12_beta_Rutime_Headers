/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelMarkerShield : NSObject <GEOTransitShieldDataSource> {
    VKImageSourceKey * _imageKey;
}

@property (nonatomic, readonly) struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; } color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSString *shieldColorString;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, readonly) long long shieldType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

- (struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; })color;
- (void)dealloc;
- (id)initWithImageKey:(id)arg1;
- (id)locale;
- (id)text;
- (long long)type;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)shieldColorString;
- (id)shieldText;
- (long long)shieldType;

@end
