/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSZStringWriter : NSObject <ICSAppendable> {
    NSMutableData * _result;
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned long long total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned long long total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned long long adler; 
        unsigned long long reserved; 
    }  _strm;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appendBytes:(const void*)arg1 length:(unsigned long long)arg2 andFlush:(bool)arg3;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (id)description;
- (id)init;
- (id)zResult;

@end
