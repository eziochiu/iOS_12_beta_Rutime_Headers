/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface ServerWrapper : NSObject {
    HapticServerInstance * _serverInstance;
}

@property (readonly) HapticServerInstance *serverInstance;

- (void).cxx_destruct;
- (id)initWithServerInstance:(id)arg1;
- (id)serverInstance;

@end
