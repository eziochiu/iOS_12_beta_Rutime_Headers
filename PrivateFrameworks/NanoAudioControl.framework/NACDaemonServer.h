/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACDaemonServer : NSObject {
    NACIDSServer * _idsServer;
}

+ (id)companionServer;
+ (id)gizmoServer;

- (void).cxx_destruct;

@end
