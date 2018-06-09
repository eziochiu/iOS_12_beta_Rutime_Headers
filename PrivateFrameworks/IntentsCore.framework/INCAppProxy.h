/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
 */

@interface INCAppProxy : NSObject {
    INCExtensionConnection * _connection;
}

@property (nonatomic, readonly) INCExtensionConnection *_connection;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_connection;
- (id)_initWithConnection:(id)arg1;
- (void)launchAppInBackground:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)launchAppInBackground:(bool)arg1 userActivityIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;

@end
