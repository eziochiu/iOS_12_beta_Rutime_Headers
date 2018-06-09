/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIMetalResourceManager : CLKUIResourceManager {
    <MTLDevice> * _device;
    NSMutableDictionary * _functionsByName;
    <MTLLibrary> * _library;
}

+ (id)functionWithName:(id)arg1;
+ (id)sharedDevice;
+ (id)sharedLibrary;
+ (id)sharedMetalInstance;

- (void).cxx_destruct;
- (id)_newAtlasForUuid:(id)arg1;
- (void)_purgeAtlases:(id)arg1;
- (id)init;

@end
