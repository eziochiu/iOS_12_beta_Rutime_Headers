/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAirPlayScreenMap : NSObject {
    NSMapTable * _screens;
}

- (void).cxx_destruct;
- (void)addDetectedAirPlayScreen:(id)arg1;
- (id)airPlayScreenForScreen:(id)arg1;
- (unsigned long long)airPlayScreensCount;
- (id)allAirPlayScreens;
- (id)init;
- (void)removeAirPlayScreen:(id)arg1;

@end
