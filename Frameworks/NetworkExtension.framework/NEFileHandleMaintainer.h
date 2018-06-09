/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFileHandleMaintainer : NSObject {
    NSObject<OS_xpc_object> * _auxiliaryDataDictionary;
    bool  _changed;
    NSString * _eventName;
    NSMutableArray * _fileHandles;
    bool  _isOwnerMode;
    id /* block */  _receivedHandlesCallback;
}

@property (retain) NSObject<OS_xpc_object> *auxiliaryDataDictionary;
@property bool changed;
@property (retain) NSString *eventName;
@property (retain) NSMutableArray *fileHandles;
@property bool isOwnerMode;
@property (copy) id /* block */ receivedHandlesCallback;

+ (id)sharedMaintainer;

- (void).cxx_destruct;
- (id)auxiliaryDataDictionary;
- (bool)changed;
- (void)commit;
- (id)copyAuxiliaryDataForKey:(id)arg1;
- (id)createEvent;
- (id)eventName;
- (id)fileHandles;
- (id)init;
- (bool)isOwnerMode;
- (void)iterateFileHandlesWithBlock:(id /* block */)arg1;
- (id /* block */)receivedHandlesCallback;
- (void)removeFileHandleMatchingPredicate:(id /* block */)arg1;
- (void)resetFileHandlesFromEvent:(id)arg1;
- (void)setAuxiliaryData:(id)arg1 forKey:(id)arg2;
- (void)setAuxiliaryDataDictionary:(id)arg1;
- (void)setChanged:(bool)arg1;
- (void)setEventName:(id)arg1;
- (void)setFileHandle:(id)arg1 matchingPredicate:(id /* block */)arg2;
- (void)setFileHandles:(id)arg1;
- (void)setIsOwnerMode:(bool)arg1;
- (void)setReceivedHandlesCallback:(id /* block */)arg1;
- (void)startOwnerModeWithEventName:(id)arg1 handlesReceivedCallback:(id /* block */)arg2;

@end