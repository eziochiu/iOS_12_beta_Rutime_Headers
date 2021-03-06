/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUEditPluginManager : NSObject {
    NSArray * __plugins;
    unsigned long long  _mediaType;
}

@property (setter=_setPlugins:, nonatomic, copy) NSArray *_plugins;
@property (readonly) unsigned long long mediaType;

+ (id)sharedManagerForMediaType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_allowedPluginTypes;
- (void)_discoveredAvailableExtensions:(id)arg1;
- (id)_initWithMediaType:(unsigned long long)arg1;
- (id)_plugins;
- (void)_setPlugins:(id)arg1;
- (bool)hasPlugins;
- (unsigned long long)mediaType;
- (id)pluginActivities;
- (void)rediscoverAvailablePlugins;

@end
