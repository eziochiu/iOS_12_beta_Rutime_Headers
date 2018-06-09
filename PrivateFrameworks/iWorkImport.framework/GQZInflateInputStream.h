/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQZInflateInputStream : NSObject <GQZEntryInputStream> {
    <GQZEntryInputStream> * mInput;
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
    }  mStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithInput:(id)arg1;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)readToOwnBuffer:(const char **)arg1 size:(unsigned long long*)arg2;

@end
