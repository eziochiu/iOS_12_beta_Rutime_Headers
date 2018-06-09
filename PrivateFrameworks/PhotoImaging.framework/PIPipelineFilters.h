/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIPipelineFilters : NSObject

+ (id)applyOrientationFilter;
+ (id)autoCropFilter;
+ (id)noCropFilter;
+ (id)noGeometryFilter;
+ (id)noMuteFilter;
+ (id)noRedEyeFilter;
+ (id)noTrimFilter;
+ (id)postGeometryFilter;
+ (id)preGeometryFilter;
+ (id)sourceFilterIncludingOrientation:(bool)arg1;
+ (id)stopAtTagIncludeGeometryFilter:(id)arg1;
+ (id)stopAtTagIncludeOrientationFilter:(id)arg1;
+ (id)sushiLevel1Filter;

@end
