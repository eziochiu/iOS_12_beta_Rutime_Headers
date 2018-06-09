/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAGenealogyTracker : NSObject <PASerializable> {
    NSMutableDictionary * _activityNames;
    NSMutableDictionary * _breadcrumbs;
    struct os_activity_stream_s { } * _messageStream;
    NSMutableDictionary * _messages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (void).cxx_destruct;
- (void)_addActivityName:(const char *)arg1 forId:(unsigned long long)arg2;
- (void)_addBreadcrumb:(struct os_activity_breadcrumb_s { unsigned int x1; unsigned long long x2; unsigned long long x3; char *x4; char *x5; char *x6; }*)arg1 forProcess:(id)arg2 withActivityId:(unsigned long long)arg3;
- (void)_addMessage:(/* Warning: unhandled struct encoding: '{os_trace_message_s=QQQ**{timeval=qi}{timezone=ii}II*^vQ@}' */ struct os_trace_message_s { unsigned long long x1; unsigned long long x2; unsigned long long x3; char *x4; char *x5; struct timeval { long long x_6_1_1; int x_6_1_2; } x6; struct timezone { int x_7_1_1; int x_7_1_2; } x7; unsigned int x8; unsigned int x9; char *x10; void *x11; unsigned long long x12; id x13; }*)arg1 withActivityId:(unsigned long long)arg2;
- (void)_parseStreamEntry:(struct os_activity_stream_entry_s { unsigned int x1; int x2; unsigned long long x3; char *x4; char *x5; unsigned long long x6; unsigned long long x7; union { struct os_activity_stream_common_s { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; char *x_1_2_4; char *x_1_2_5; struct timeval { long long x_6_3_1; int x_6_3_2; } x_1_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_8_1_1; struct os_activity_stream_common_with_name_s { unsigned long long x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; char *x_2_2_4; char *x_2_2_5; struct timeval { long long x_6_3_1; int x_6_3_2; } x_2_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; char *x_2_2_10; } x_8_1_2; struct os_activity_create_s { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; char *x_3_2_4; char *x_3_2_5; struct timeval { long long x_6_3_1; int x_6_3_2; } x_3_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_3_2_7; unsigned int x_3_2_8; unsigned int x_3_2_9; char *x_3_2_10; unsigned long long x_3_2_11; unsigned long long x_3_2_12; } x_8_1_3; } x8; }*)arg1;
- (id)activityNameForId:(unsigned long long)arg1;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)breadcrumbsForProcess:(int)arg1 betweenMachStartTime:(double)arg2 andEndTime:(double)arg3;
- (void)dealloc;
- (id)init;
- (id)messagesForThread:(unsigned long long)arg1 betweenMachStartTime:(double)arg2 andEndTime:(double)arg3;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)stopTracking;
- (void)trackGloballyWithFlags:(unsigned long long)arg1;
- (void)trackPid:(int)arg1 withFlags:(unsigned long long)arg2;

@end
