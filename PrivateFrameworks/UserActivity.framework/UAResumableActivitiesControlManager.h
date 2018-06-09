/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UAResumableActivitiesControlManager : NSObject {
    id  _delegate;
    int  _pid;
    int  _recordingPath;
    NSXPCConnection * connection;
}

@property (retain) NSXPCConnection *connection;
@property id delegate;
@property int recordingPath;
@property (readonly) int serverPID;

+ (id)resumableActivitiesControlManager;

- (void).cxx_destruct;
- (id)advertisedItemUUID;
- (id)allUUIDsOfType:(unsigned long long)arg1;
- (void)broadcastPing:(id /* block */)arg1;
- (void)callDidSaveDelegate:(id)arg1;
- (void)callWillSaveDelegate:(id)arg1;
- (void)callWillSaveDelegate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)connectToRemote:(id)arg1 port:(long long)arg2;
- (id)connection;
- (id)currentAdvertisedItemUUID;
- (id)debuggingInfo;
- (id)defaults:(bool)arg1;
- (id)delegate;
- (id)dynamicUserActivities;
- (id)enabledUUIDs;
- (bool)getAdvertisedBytes:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getCurrentPeersAndClear:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)getSysdiagnoseStringsIncludingPrivateData:(bool)arg1;
- (id)init;
- (void)injectBTLEItem:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 title:(id)arg4 activityPayload:(id)arg5 frameworkPayload:(id)arg6 payloadDelay:(double)arg7;
- (id)matchingUUIDForString:(id)arg1;
- (id)recentActions:(bool)arg1;
- (int)recordingPath;
- (void)rendevous:(id)arg1 domain:(id)arg2 active:(bool)arg3;
- (void)replayCommands:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)restartServer;
- (int)serverPID;
- (void)setConnection:(id)arg1;
- (void)setDebugOption:(id)arg1 value:(id)arg2;
- (void)setDefault:(id)arg1 value:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLocalReflect:(bool)arg1;
- (void)setRecordingPath:(int)arg1;
- (id)simulatorStatus;
- (void)startAdvertisingPingWithTimeInterval:(double)arg1;
- (id)status;
- (id)status:(id)arg1 options:(id)arg2;
- (void)stopAdvertisingPing;
- (void)synchronize;
- (void)terminateServer;

@end
