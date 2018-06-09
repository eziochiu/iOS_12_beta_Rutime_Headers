/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface _PLPhotoAnalysisXPCConnection : NSObject {
    bool  _graphIsReady;
    bool  _graphLoadWasSent;
    bool  _wantsGraphLoaded;
    NSXPCConnection * _xpcConnection;
}

+ (id)sharedConnection;

- (void).cxx_destruct;
- (void)_setupXPCConnection;
- (id)_xpcConnection_locked;
- (void)dealloc;
- (bool)graphIsReady;
- (bool)graphLoadWasSent;
- (void)loadGraphWithContext:(id)arg1;
- (void)unloadGraphWithContext:(id)arg1;
- (bool)wantsGraphLoaded;
- (id)xpcConnection;

@end
