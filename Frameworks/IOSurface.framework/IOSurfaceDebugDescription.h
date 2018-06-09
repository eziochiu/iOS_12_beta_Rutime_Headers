/* made by EzioChiu
   Image: /System/Library/Frameworks/IOSurface.framework/IOSurface
 */

@interface IOSurfaceDebugDescription : NSObject

@property (readonly) unsigned long long allocationSize;
@property (readonly) unsigned int height;
@property (readonly) NSString *name;
@property (readonly) unsigned int pixelFormat;
@property (readonly) unsigned int surfaceID;
@property (readonly) unsigned long long virtualAddress;
@property (readonly) unsigned int width;

+ (id)surfaceDescriptions;

@end
