/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKHostDefaults : NSUserDefaults {
    PKHostPlugIn * _plugin;
    NSObject<OS_dispatch_queue> * _queue;
}

@property PKHostPlugIn *plugin;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithPlugIn:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)plugin;
- (id)queue;
- (void)registerDefaults:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setPlugin:(id)arg1;
- (void)setQueue:(id)arg1;
- (bool)synchronize;

@end
