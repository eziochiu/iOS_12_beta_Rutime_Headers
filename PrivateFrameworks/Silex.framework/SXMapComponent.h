/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMapComponent : SXComponent

@property (nonatomic, readonly) NSString *accessibilityCaption;
@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) unsigned long long defaultMapType;
@property (nonatomic, readonly) SXJSONArray *items;
@property (nonatomic, readonly) struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;

+ (id)typeString;
+ (id /* block */)valueClassBlockForPropertyWithName:(id)arg1;

- (unsigned long long)defaultMapTypeWithValue:(id)arg1 withType:(int)arg2;

@end
