/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSLogEventProxy : NSObject <OSLogEventProvider> {
    struct os_activity_map_s { } * _aid_map;
    OSLogEventBacktrace * _backtrace;
    OSLogEventDecomposedMessage * _decomposedMessage;
    unsigned long long  _efv;
    struct { 
        unsigned long long type; 
        int pid; 
        unsigned long long proc_id; 
        unsigned int pidversion; 
        char *proc_imageuuid; 
        char *proc_imagepath; 
        unsigned long long activity_id; 
        unsigned long long parent_id; 
        struct { 
            unsigned long long trace_id; 
            unsigned long long timestamp; 
            unsigned long long thread; 
            struct mach_timebase_info { 
                unsigned int numer; 
                unsigned int denom; 
            } timebase; 
            char *dsc_uuid; 
            char *image_uuid; 
            char *image_path; 
            struct timeval { 
                long long tv_sec; 
                int tv_usec; 
            } tv_gmt; 
            struct timezone { 
                int tz_minuteswest; 
                int tz_dsttime; 
            } tz; 
            unsigned int offset; 
            unsigned int opaque_flags; 
            char *message; 
            unsigned long long sz; 
        } common; 
        union { 
            struct { 
                unsigned long long creator_aid; 
                unsigned long long unique_pid; 
            } activity_create; 
            struct { 
                unsigned long long transition_id; 
            } activity_transition; 
            struct { 
                char *buffer; 
                unsigned long long buffer_sz; 
                struct os_log_fmt_hdr_s {} *hdr; 
                void *pubdata; 
                unsigned short pubdata_sz; 
                char *privdata; 
                unsigned long long privdata_sz; 
                char *subsystem; 
                char *category; 
                unsigned int oversize_id; 
                unsigned char ttl; 
                bool persisted; 
                unsigned char signpost_scope; 
                unsigned char signpost_type; 
                unsigned long long signpost_id; 
                unsigned int signpost_name_offset; 
                char *signpost_name; 
                struct os_trace_context_data_s {} *ctxdata; 
                unsigned long long ctxdata_sz; 
            } log_message; 
            struct { 
                char *action; 
                bool persisted; 
            } useraction; 
            struct { 
                unsigned char boot_uuid[16]; 
                unsigned long long flags; 
                unsigned long long continuous_time; 
                unsigned long long wallclock_nsec; 
                unsigned char ttl; 
            } timesync; 
            struct { 
                struct { 
                    unsigned long long stamp; 
                    struct timeval { 
                        long long tv_sec; 
                        int tv_usec; 
                    } tv_gmt; 
                    struct timezone { 
                        int tz_minuteswest; 
                        int tz_dsttime; 
                    } tz; 
                } start; 
                struct { 
                    unsigned long long stamp; 
                    struct timeval { 
                        long long tv_sec; 
                        int tv_usec; 
                    } tv_gmt; 
                    struct timezone { 
                        int tz_minuteswest; 
                        int tz_dsttime; 
                    } tz; 
                } end; 
                unsigned int count; 
            } loss; 
        } ; 
        struct { 
            unsigned long long message_size; 
            unsigned char ttl; 
        } statedump; 
    }  _eint;
    struct { unsigned int x1; unsigned long long x2; union { struct { struct tracev3_chunk_s {} *x_1_2_1; struct catalog_s {} *x_1_2_2; struct _OSLogEventChunkContext { struct tracev3_chunk_s {} *x_3_3_1; struct _firehose_unaligned_chunk_s {} *x_3_3_2; struct iovec { void *x_3_4_1; unsigned long long x_3_4_2; } x_3_3_3; struct catalog_procinfo_s {} *x_3_3_4; } x_1_2_3; struct _firehose_unaligned_tracepoint_s {} *x_1_2_4; } x_3_1_1; struct { unsigned char x_2_2_1[16]; struct os_timesync_time_entry_s { struct os_timesync_header_s { unsigned short x_1_4_1; unsigned short x_1_4_2; unsigned int x_1_4_3; } x_2_3_1; unsigned long long x_2_3_2; unsigned long long x_2_3_3; struct timezone { int x_4_4_1; int x_4_4_2; } x_2_3_4; } x_2_2_2; } x_3_1_2; struct { unsigned char x_3_2_1[16]; unsigned char x_3_2_2; bool x_3_2_3; } x_3_1_3; } x3; } * _event;
    NSString * _logMessage;
    NSString * _processImagePath;
    unsigned long long  _retainCount;
    NSString * _senderImagePath;
    bool  _sensitive;
    unsigned long long  _thread;
    bool  _trackActivities;
    struct _os_timesync_db_s { } * _tsdb;
    struct timezone { 
        int tz_minuteswest; 
        int tz_dsttime; 
    }  _tz;
    int  _uuiddbfd;
    unsigned long long  _uuidi;
}

@property (nonatomic, readonly) unsigned int _oversizeIdentifier;
@property (nonatomic) unsigned long long _timesyncRangeUUIDIndex;
@property (nonatomic, readonly) unsigned long long activityIdentifier;
@property (nonatomic, readonly) OSLogEventBacktrace *backtrace;
@property (nonatomic, readonly) NSUUID *bootUUID;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *composedMessage;
@property (nonatomic, readonly) unsigned long long continuousNanosecondsSinceBoot;
@property (nonatomic, readonly) unsigned long long creatorActivityIdentifier;
@property (nonatomic, readonly) unsigned long long creatorProcessUniqueIdentifier;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) OSLogEventDecomposedMessage *decomposedMessage;
@property (nonatomic, readonly) NSString *formatString;
@property (nonatomic, readonly) unsigned long long logType;
@property (nonatomic, readonly) struct { unsigned int x1; bool x2; } lossCount;
@property (nonatomic, readonly) unsigned long long lossEndMachContinuousTimestamp;
@property (nonatomic, readonly) struct timeval { long long x1; int x2; }*lossEndUnixDate;
@property (nonatomic, readonly) struct timezone { int x1; int x2; }*lossEndUnixTimeZone;
@property (nonatomic, readonly) unsigned long long lossStartMachContinuousTimestamp;
@property (nonatomic, readonly) struct timeval { long long x1; int x2; }*lossStartUnixDate;
@property (nonatomic, readonly) struct timezone { int x1; int x2; }*lossStartUnixTimeZone;
@property (nonatomic, readonly) unsigned long long machContinuousTimestamp;
@property (nonatomic, readonly) unsigned long long parentActivityIdentifier;
@property (nonatomic, readonly) NSString *process;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly) NSString *processImagePath;
@property (nonatomic, readonly) NSUUID *processImageUUID;
@property (nonatomic, readonly) const char *processImageUUIDBytes;
@property (nonatomic, readonly) NSString *sender;
@property (nonatomic, readonly) unsigned long long senderImageOffset;
@property (nonatomic, readonly) NSString *senderImagePath;
@property (nonatomic, readonly) NSUUID *senderImageUUID;
@property (nonatomic, readonly) const char *senderImageUUIDBytes;
@property (nonatomic, readonly) unsigned long long signpostIdentifier;
@property (nonatomic, readonly) NSString *signpostName;
@property (nonatomic, readonly) unsigned long long signpostScope;
@property (nonatomic, readonly) unsigned long long signpostType;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) NSString *subsystem;
@property (nonatomic, readonly) unsigned long long threadIdentifier;
@property (nonatomic, readonly) unsigned long long timeToLive;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) unsigned long long traceIdentifier;
@property (nonatomic, readonly) unsigned long long transitionActivityIdentifier;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) struct timeval { long long x1; int x2; }*unixDate;
@property (nonatomic, readonly) struct timezone { int x1; int x2; }*unixTimeZone;

+ (id)_make;

- (void)_assertBalanced;
- (void)_fillFromXPCEventObject:(id)arg1;
- (unsigned int)_oversizeIdentifier;
- (void)_setBuffer:(const void*)arg1 size:(unsigned long long)arg2 privateBuffer:(const void*)arg3 privateSize:(unsigned long long)arg4;
- (void)_setDoNotTrackActivites:(bool)arg1;
- (void)_setFallbackTimezone;
- (void)_setIncludeSensitive:(bool)arg1;
- (bool)_setLogEvent:(struct { unsigned int x1; unsigned long long x2; union { struct { struct tracev3_chunk_s {} *x_1_2_1; struct catalog_s {} *x_1_2_2; struct _OSLogEventChunkContext { struct tracev3_chunk_s {} *x_3_3_1; struct _firehose_unaligned_chunk_s {} *x_3_3_2; struct iovec { void *x_3_4_1; unsigned long long x_3_4_2; } x_3_3_3; struct catalog_procinfo_s {} *x_3_3_4; } x_1_2_3; struct _firehose_unaligned_tracepoint_s {} *x_1_2_4; } x_3_1_1; struct { unsigned char x_2_2_1[16]; struct os_timesync_time_entry_s { struct os_timesync_header_s { unsigned short x_1_4_1; unsigned short x_1_4_2; unsigned int x_1_4_3; } x_2_3_1; unsigned long long x_2_3_2; unsigned long long x_2_3_3; struct timezone { int x_4_4_1; int x_4_4_2; } x_2_3_4; } x_2_2_2; } x_3_1_2; struct { unsigned char x_3_2_1[16]; unsigned char x_3_2_2; bool x_3_2_3; } x_3_1_3; } x3; }*)arg1 rangeUUIDIndex:(unsigned long long)arg2 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; }*)arg3;
- (void)_setThreadCrumb;
- (void)_setTimesyncDatabase:(struct _os_timesync_db_s { }*)arg1;
- (void)_setUUIDDBFileDescriptor:(int)arg1;
- (unsigned long long)_timesyncRangeUUIDIndex;
- (oneway void)_unmake;
- (unsigned long long)activityIdentifier;
- (id)backtrace;
- (id)bootUUID;
- (id)category;
- (id)composedMessage;
- (unsigned long long)continuousNanosecondsSinceBoot;
- (unsigned long long)creatorActivityIdentifier;
- (unsigned long long)creatorProcessUniqueIdentifier;
- (id)date;
- (id)decomposedMessage;
- (id)description;
- (id)formatArguments;
- (id)formatString;
- (id)init;
- (unsigned long long)logType;
- (struct { unsigned int x1; bool x2; })lossCount;
- (unsigned long long)lossEndMachContinuousTimestamp;
- (struct timeval { long long x1; int x2; }*)lossEndUnixDate;
- (struct timezone { int x1; int x2; }*)lossEndUnixTimeZone;
- (unsigned long long)lossStartMachContinuousTimestamp;
- (struct timeval { long long x1; int x2; }*)lossStartUnixDate;
- (struct timezone { int x1; int x2; }*)lossStartUnixTimeZone;
- (unsigned long long)machContinuousTimestamp;
- (id)methodSignatureForSelector:(SEL)arg1;
- (unsigned long long)parentActivityIdentifier;
- (id)process;
- (int)processIdentifier;
- (unsigned int)processIdentifierVersion;
- (id)processImagePath;
- (id)processImageUUID;
- (const char *)processImageUUIDBytes;
- (unsigned long long)processUniqueIdentifier;
- (oneway void)release;
- (bool)respondsToSelector:(SEL)arg1;
- (id)retain;
- (id)sender;
- (unsigned long long)senderImageOffset;
- (id)senderImagePath;
- (id)senderImageUUID;
- (const char *)senderImageUUIDBytes;
- (void)set_timesyncRangeUUIDIndex:(unsigned long long)arg1;
- (unsigned long long)signpostIdentifier;
- (id)signpostName;
- (unsigned long long)signpostScope;
- (unsigned long long)signpostType;
- (unsigned long long)size;
- (id)subsystem;
- (unsigned long long)threadIdentifier;
- (unsigned long long)timeToLive;
- (id)timeZone;
- (unsigned long long)traceIdentifier;
- (unsigned long long)transitionActivityIdentifier;
- (unsigned long long)type;
- (struct timeval { long long x1; int x2; }*)unixDate;
- (struct timezone { int x1; int x2; }*)unixTimeZone;
- (id)valueForUndefinedKey:(id)arg1;

@end
