/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSImageSurface : NSObject <BSXPCCoding> {
    struct __IOSurface { } * _backingSurface;
}

@property (nonatomic) struct __IOSurface { }*backingSurface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct __IOSurface { }*)backingSurface;
- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setBackingSurface:(struct __IOSurface { }*)arg1;

@end
