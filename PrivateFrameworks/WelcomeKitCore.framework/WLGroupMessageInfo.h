/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLGroupMessageInfo : NSObject {
    NSString * _groupID;
    bool  _handleIDsAreComplete;
    NSString * _roomName;
    NSArray * _sortedHandleIDs;
    NSString * _sourceThreadID;
}

@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) bool handleIDsAreComplete;
@property (nonatomic, readonly) NSString *roomName;
@property (nonatomic, readonly) NSArray *sortedHandleIDs;
@property (nonatomic, readonly) NSString *sourceThreadID;

+ (id)groupMessageInfoWithSourceThreadID:(id)arg1 sortedHandleIDs:(id)arg2 handleIDsAreComplete:(bool)arg3 roomName:(id)arg4 groupID:(id)arg5;

- (void).cxx_destruct;
- (id)groupID;
- (bool)handleIDsAreComplete;
- (id)roomName;
- (id)sortedHandleIDs;
- (id)sourceThreadID;

@end
